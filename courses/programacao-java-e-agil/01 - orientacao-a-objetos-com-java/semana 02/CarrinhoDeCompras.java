public class CarrinhoDeCompras {

	private int valorTotal;

	public CarrinhoDeCompras() {
		valorTotal = 0;
	}

	public void adicionarPizza(Pizza pizza) {

		if (pizza > 0) {
			valorTotal += pizza.getPreco();
		}
		
	}

	public int getValorTotal() {
		return valorTotal;
	}

}