public class FixedCapacityStack<Item> implements Iterable<Item>{

	private Item[] s;
	private int N = 0;

	public FixedCapacityStack(int capacity) {
		s = (Item[]) new Object[capacity];
	}

	public boolean isEmpty() {
		return N == 0;
	}

	public void push(Item item) {
		s[N++] = item;
	}

	public Item pop() {
		Item item = s[--N];
		s[N] = null;

		return item;
	}

	public Iterator<Item> iterator() {
		return new ReverseIterator();
	}

	private class ReverseIterator implements Iterator<Item> {

		private int i = N;

		public boolean hasNext() {
			return i > 0;
		}

		public Item next() {
			return s[--i];
		}

		//public void remove() {}
	}
}