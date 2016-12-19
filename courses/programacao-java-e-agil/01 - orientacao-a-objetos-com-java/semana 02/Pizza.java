import java.util.HashMap;
import java.util.Map;

public class Pizza {

	public static Map<String, int> ingredientes;
	public int qtIngredientes;

	public Pizza() {

		qtIngredientes = 0;
		ingredientes = new HashMap<>();
		
	}

	public static void contabilizaIngrediente(String ingrediente) {

		int qt = 1;

		if (ingredientes.get(ingrediente) != null) {
			qt += ingredientes.get(ingrediente);
		}

		ingredientes.put(ingrediente, qt);

	}

	public void adicionaIngrediente(String ingrediente) {
		qtIngredientes++;

		contabilizaIngrediente(ingrediente);
	}

	public int getPreco() {

		if (qtIngredientes < 3) {
			return 15;
		} else if (qtIngredientes < 6) {
			return 20;
		} else {
			return 23;
		}
	}
}