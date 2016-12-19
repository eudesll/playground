public class LinearProbingHashST<Key, Value> {

	private int M = 30001;
	private Value[] vals = (Value[]) new Object[M];
	private Key[] keys = (Key[]) new Object[M];

	private int hash(Key key) {
    	return (key.hasCode() & 0x7ffffffff) % M;
    }

    public void put(Key key, Value val) {

    	for (int i = hash(key); keys[i] != null; i = (i + 1) % M) {
    		if (keys[i].equals(key)) {
    			break;
    		}
    	}

    	keys[i] = key;
    	vals[i] = val;
    }

    public Value get(Key key) {

    	for (int i = hash(key); keys[i] != null; i = (i + 1) % M) {
    		if (keys[i].equals(key)) {
    			return vals[i];
    		}
    	}

    	return null;
    }
}