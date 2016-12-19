public class UnorderedMaxPQ<Key extends Comparable<Key>> {

	private Key[] pq;
	private int N;

	public UnorderedMaxPQ(int capacity) {
		pq = (Key []) new Comparable[capacity];
	}

	public boolean isEmpty() {
		return N == 0;
	}

	public void insert(key x) {
		pq[N++] = x;
	}

	public Key delMax() {

		int max = 0;
		for (int i = 1; i < N; i++) {
			if (less(max, i)) {
				max = i;
			}
		}

		exch(max, N - 1);
		return pq[--N];
	}

	private static boolean less(int i, int j) {
		return pq[i].compareTo(pq[j]) < 0;
	}

	private static void exch(Comparable[] a, int i, int j) {
		Key t = pq[i];
		pq[i] = pq[j];
		pq[j] = t;
	}
}