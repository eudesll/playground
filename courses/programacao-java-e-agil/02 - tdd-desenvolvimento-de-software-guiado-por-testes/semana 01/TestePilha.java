public class TestePilha {

	private Pilha p;

	@Before
	public void inicializaPilha() {
		p = new Pilha(10);
	}

	@Test
	public void pilhaVazia() {
		assertTrue(p.estaVazia());
		assertEquals(0, p.tamanho());
	}

	@Test
	public void empilhaUmElemento() {
		p.empilha("primeiro");

		assertFalse(p.estaVazia());
		assertEquals(1, p.tamanho());
		assertEquals("primeiro", p.topo());
	}

	@Test
	public void empilhaEDesempilha() {
		p.empilha("primeiro");
		p.empilha("segundo");

		assertEquals(2, p.tamanho());
		assertEquals("segundo", p.topo());

		Object desempilhado = p.desempilha();

		assertEquals(1, p.tamanho());
		assertEquals("primeiro", p.topo());
		assertEquals("segundo", desempilhado);
	}

	@Test(expect=PilhaVaziaException.class)
	public void removeDaPilhaVazia() {
		p.desempilha();
	}

	@Test
	public void adicionaNaPilhaCheia() {
		for (int i = 0; i < 10; i++) {
			p.empilha("elemento" + i);
		}

		try {
			p.empilha("boom");
			fail();
		} catch (PilhaCheiaException e) {}
	}
}