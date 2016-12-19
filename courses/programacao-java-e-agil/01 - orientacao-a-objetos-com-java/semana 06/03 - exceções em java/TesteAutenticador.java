public class TesteAutenticado {

	@Test
	public void loginComSucesso() throws LoginException {
		Autenticador a = new Autenticador();
		Usuario u = a.login("guerra", "senhadoguerra");

		assertEquals("guerra", u.getLogin());
	}

	@Test(expected= LoginException.class)
	public void loginFalho() throws LoginException {
		Autenticador a = new Autenticador();
		Usuario u = a.login("guerra", "senhaerradadoguerra");
	}

	@Test
	public void informacaoDoErro() {
		Autenticador a = new Autenticador();

		try {
			Usuario u = a.login("guerra", "senhaerradadoguerra");
			fail();
		} catch (LoginException e) {
			assertEquals("guerra", e.getLogin());
		}
	}
}