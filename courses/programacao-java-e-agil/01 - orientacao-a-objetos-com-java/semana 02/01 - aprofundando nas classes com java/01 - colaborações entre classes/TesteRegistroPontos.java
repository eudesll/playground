import static org.junit.Assert.*;
import org.junit.Test;

public class TesteRegistroPontos {

	@Test
	public void pontosCriarTopico() {
		Usuario u = new Usuario();
		u.nome = "Guerra";

		CalculadoraBonus cb = new CalculadoraBonus();

		RegistroPontos rp = new RegistroPontos(cb);
		rp.criarUmTopico(u);

		assertEquals(u.pontos, 5);
	}

	@Test
	public void pontosCriarTopicoVip() {
		Usuario u = new Usuario();
		u.nome = "Guerra";
		u.vip = true;

		CalculadoraBonus cb = new CalculadoraBonus();

		RegistroPontos rp = new RegistroPontos(cb);
		rp.criarUmTopico(u);

		assertEquals(u.pontos, 25);
	}

	@Test
	public void pontosCriarTopicoBonusDoDia() {
		Usuario u = new Usuario();
		u.nome = "Guerra";

		CalculadoraBonus cb = new CalculadoraBonus();
		cb.bonusDoDia = 3;

		RegistroPontos rp = new RegistroPontos(cb);
		rp.criarUmTopico(u);

		assertEquals(u.pontos, 15);
	}

	@Test
	public void pontosCriarTopicoVipBonusDoDia() {
		Usuario u = new Usuario();
		u.nome = "Guerra";
		u.vip = true;

		CalculadoraBonus cb = new CalculadoraBonus();
		cb.bonusDoDia = 2;

		RegistroPontos rp = new RegistroPontos(cb);
		rp.criarUmTopico(u);

		assertEquals(u.pontos, 50);
	}
}