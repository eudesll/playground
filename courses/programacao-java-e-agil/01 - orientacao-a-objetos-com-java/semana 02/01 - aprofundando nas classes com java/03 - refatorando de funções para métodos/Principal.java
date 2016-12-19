public class Principal {

	public static void main(String[] args) {

		Aluno guerra = new Aluno();
		guerra.bim1 = 70;
		guerra.bim2 = 60;
		guerra.bim3 = 80;
		guerra.bim4 = 70;

		//System.out.println(VerificadoraNotas.mediaAluno(guerra));
		//System.out.println(VerificadoraNotas.passouDeAno(guerra));

		System.out.println(guerra.media());
		System.out.println(guerra.passouDeAno());
	}
}