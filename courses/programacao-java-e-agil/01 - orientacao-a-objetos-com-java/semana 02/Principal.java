public class Principal {

	public static void main(String[] args) {

		Pizza p1 = new Pizza();
		p1.adicionaIngrediente("Repolho");
		Pizza p2 = new Pizza();
		p2.adicionaIngrediente("Brocolis");
		p2.adicionaIngrediente("Repolho");
		Pizza p3 = new Pizza();
		p3.adicionaIngrediente("Abacate");
		p3.adicionaIngrediente("Tomate");

		CarrinhoDeCompras cc = new CarrinhoDeCompras();
		cc.adicionarPizza(p1);
		cc.adicionarPizza(p2);
		cc.adicionarPizza(p3);

		System.out.println("Valor Total: " + cc.valorTotal);

		for (String ingrediente : Pizza.ingredientes.keySet()) { 

			int qt = Pizza.ingredientes.get(ingrediente); 
			System.out.println("Ingrediente: " + ingrediente + " - Quantidade: " + qt); 

		}

	}
}