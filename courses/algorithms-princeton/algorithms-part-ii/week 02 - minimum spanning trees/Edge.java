public class Edge implements Comparable<Edge> {

	private final int v, w;
	private final double weigth;

	public Edge(int v, int w, double weigth) {
		this.v = v;
		this.w = w;
		this.weigth = weigth;
	}

	public int either() {
		return v;
	}

	public int other(int vertex) {
		if (vertex == v) {
			return w;
		} else {
			return v;
		}
	}

	public int compareTo(Edge that) {
		if (this.weigth < that.weigth) {
			return -1;
		} else if (this.weigth > that.weigth) {
			return +1;
		} else {
			return 0;
		}
	}
}