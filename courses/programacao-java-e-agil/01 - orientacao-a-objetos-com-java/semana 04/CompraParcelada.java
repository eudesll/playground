public class CompraParcelada extends Compra {

	private int parcelas;
	private double jurosMensal;

	public CompraParcelada(double valor, int parcelas, double jurosMensal) {
		super(valor);

		this.parcelas = parcelas;
		this.jurosMensal = jurosMensal;
	}

	public double total() {
		return valor * ((1 + jurosMensal) ^ parcelas);
	}
}