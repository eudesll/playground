public class KruskalMST {

	private Queue<Edge> mst = new Queue<Edge>();

	public KruskalMST(EdgeWeigthedGraph G) {

		MinPQ<Edge> pq = new MinPQ<Edge>();
		for (Edge e : G.edges()) {
			pq.insert(e);
		}

		UF uf = new UF(G.V());
		while (!pq.isEmpty() && mst.size() < G.V() - 1) {

			Edge e = pq.delMin();
			int v = e.either(), w = e.other(v);

			if (!uf.connected(v, w)) {
				uf.union(v, w);
				mst.enqueue(e);
			}
		}
	}

	public Iterable<Edge> edge() {
		return mst;
	}
}