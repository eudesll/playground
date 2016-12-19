public class Candidato implements Comparable<Candidato> {

	private int nota;
	private boolean deficiente;
	private int idade;

	public Candidato(int nota, boolean deficiente, int idade) {
		this.nota = nota;
		this.deficiente = deficiente;
		this.idade = idade;
	}

	@Override
	public int compareTo(Candidato outro) {
		if (nota == outro.getNota()) {
			if (deficiente == outro.isDeficiente()) {

				return idade - outro.getIdade();

			} else {
				if (deficiente) {
					return 1;
				}

				return -1;
			}
		}

		return nota - outro.getNota();
	}

	public int getNota() {
		return nota;
	}

	public boolean isDeficiente() {
		return deficiente;
	}

	public int getIdade() {
		return idade;
	}

	@Override
	public String toString() {
		return nota + ";" + deficiente + ";" + idade;
	}

}