public class Paciente {

	@Test
	public void testeBaixoMuitoGrave() {
		Paciente p = new Paciente(2.00, 10);

		assertEquals(p.diagnostico(), "Baixo peso muito grave");
	}

	@Test
	public void testeBaixoGrave() {
		Paciente p = new Paciente(1, 1);

		assertEquals(p.diagnostico(), "Baixo peso grave");
	}

	@Test
	public void testeBaixo() {
		Paciente p = new Paciente(1, 1);

		assertEquals(p.diagnostico(), "Baixo peso grave");
	}

	@Test
	public void testeNormal() {
		Paciente p = new Paciente(1, 1);

		assertEquals(p.diagnostico(), "Baixo peso");
	}

	@Test
	public void testeSobrepeso() {
		Paciente p = new Paciente(1, 1);

		assertEquals(p.diagnostico(), "Sobrepeso");
	}

	@Test
	public void testeObesidadeI() {
		Paciente p = new Paciente(1, 1);

		assertEquals(p.diagnostico(), "Obesidade grau I");
	}

	@Test
	public void testeObesidadeII() {
		Paciente p = new Paciente(1, 1);

		assertEquals(p.diagnostico(), "Obesidade grau II");
	}

	@Test
	public void testeObesidadeIII() {
		Paciente p = new Paciente(1.00, 100);

		assertEquals(p.diagnostico(), "Obesidade grau III (obesidade mórbida)");
	}

}