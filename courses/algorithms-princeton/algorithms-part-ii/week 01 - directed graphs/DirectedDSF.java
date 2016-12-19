public class DirectedDSF {

	private boolean[] marked;

	public DirectedDSF(Digraph G, int s) {
		marked = new boolean[G.V()];
		dfs(G, s);
	}

	private void dfs(Digraph G, int v) {
		marked[v] = true;

		for (int w : G.adj(v)) {
			if (!marked[w]) {
				dfs(G, w);
			}
		}
	}

	public boolean visited(int v) {
		return marked[v];
	}
}