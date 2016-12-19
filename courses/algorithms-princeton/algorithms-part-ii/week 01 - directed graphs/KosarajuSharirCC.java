public class KosarajuSharirCC {

    private boolean[] marked;
    private int[] id;
    private int[] size;
    private int count;

    public KosarajuSharirCC(Graph G) {
        marked = new boolean[G.V()];
        id = new int[G.V()];
        size = new int[G.V()];

        DepthFirstOrder dfs = new DepthFirstOrder(G.reverse());
        for (int v : dfs.reversePost()) {
            if (!marked[v]) {
                dfs(G, v);
                count++;
            }
        }
    }

    private void dfs(Graph G, int v) {
        marked[v] = true;
        id[v] = count;
        size[count]++;
        for (int w : G.adj(v)) {
            if (!marked[w]) {
                dfs(G, w);
            }
        }
    }

    public int id(int v) {
        return id[v];
    }

    public int size(int v) {
        return size[id[v]];
    }

    public int count() {
        return count;
    }

    public boolean connected(int v, int w) {
        return id(v) == id(w);
    }

    public boolean areConnected(int v, int w) {
        return id(v) == id(w);
    }

    public static void main(String[] args) {
        In in = new In(args[0]);
        Graph G = new Graph(in);
        KosarajuSharirCC cc = new KosarajuSharirCC(G);

        int M = cc.count();
        StdOut.println(M + " components");

        Queue<Integer>[] components = (Queue<Integer>[]) new Queue[M];
        for (int i = 0; i < M; i++) {
            components[i] = new Queue<Integer>();
        }
        for (int v = 0; v < G.V(); v++) {
            components[cc.id(v)].enqueue(v);
        }

        for (int i = 0; i < M; i++) {
            for (int v : components[i]) {
                StdOut.print(v + " ");
            }
            StdOut.println();
        }
    }
}