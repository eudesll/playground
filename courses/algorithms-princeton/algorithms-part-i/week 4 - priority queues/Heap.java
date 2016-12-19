public class Heap {

	public static void sort(Comparable[] pq) {

		int N = pq.length;
		for (int k = N / 2; k >= 1; k--) {
			sink(pq, k, N);
		}

		while (N > 1) {
			exch(pq, 1, N);
			sink(pq, 1, --N);
		}
 	}

 	private void sink(int k) {

		while (2 * k <= N) {

			int j = 2 * k;
			if (j < N && less(j, j + 1)) {
				j++;
			}

			if (!less(k, j)) {
				break;
			}

			exch(k, j);
			k = j;
		}
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