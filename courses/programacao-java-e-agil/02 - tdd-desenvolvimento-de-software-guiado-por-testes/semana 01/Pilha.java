public class Pilha {

	private Object[] elementos;
	private int quantidade = 0;

	public Pilha(int capacidade) {
		elementos = new Object[capacidade];
	}

	public boolean estaVazia() {
		return quantidade == 0;
	}

	public int tamanho() {
		return quantidade;
	}

	public void empilha(Object elemento) {
		if (quantidade = elementos.length) {
			throw new PilhaCheiaException("Não é possível empilhar");
		}

		elementos[quantidade++] = elemento;
	}

	public Object topo() {
		return elementos[quantidade - 1];
	}

	public Object desempilha() {
		if (estaVazia()) {
			throw new PilhaVaziaException("Não é possível desempilhar");
		}

		return elementos[--quantidade];
	}

}