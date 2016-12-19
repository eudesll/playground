public class EdgeWeightedDigraph {

	private final int V;
	private final Bag<DirectedEdge>[] adj;

	public EdgeWeightedDigraph(int V) {
		this.V = V;
		adj = (Bag<DirectedEdge>[]) new Bag[V];

		for (int v = 0; v < V; v++) {
			adj[v] = new Bag<DirectedEdge>();
		}
	}

	public void addEdge(DirectedEdge e) {

		int v = e.either(), w = e.other(v);
		adj[v].add(e);
		adj[w].add(e);
	}

	public Iterable<DirectedEdge> adj(int v) {
		return adj[v];
	}
}