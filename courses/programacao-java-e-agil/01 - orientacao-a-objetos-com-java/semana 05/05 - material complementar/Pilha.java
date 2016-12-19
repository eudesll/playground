public class Pilha {

	private Object[] elementos;
	private int topo = 0;

	public Pilha(int maximo) {
		elementos = new Object[maximo];
	}

	public void empilhar(Object elemento) {
		elementos[topo++] = elemento;
	}

	public Object desempilhar() {
		return elemntos[--topo];
	}

	public Object topo() {
		return elementos[topo - 1];
	}

	public int tamanho() {
		return topo;
	}

	public Object[] getElementos() {
		return Arrays.copyOf(elementos, tamanho());
	}

}