// Estou mandando atrasado pois minha internet caiu, e aí perdi um certo tentando fazer ela voltar
// e não foi possível terminar no tempo correto, a que mandei na versão final tem alguns erros e estou ciente
// não os fiz pq realmente não tive tempo (inclusive não mandei a versão parcial por este motivo, não tinha internet)
// mas mesmo após terminar continue testando pra poder consertar e aqui está a versão final

public class Prato {
    private String nome;
    private double valor;
    private EnumTipoPrato tipoPrato;

	public String getNome() {
		return this.nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public double getValor() {
		return this.valor;
	}

	public void setValor(double valor) {
		this.valor = valor;
	}

	public EnumTipoPrato getTipoPrato() {
		return this.tipoPrato;
	}

	public void setTipoPrato(EnumTipoPrato tipoPrato) {
		this.tipoPrato = tipoPrato;
	}

    public Prato(String nome, double valor, EnumTipoPrato tipoPrato){
        this.nome= nome;
        this.valor= valor;
        this.tipoPrato= tipoPrato;
    }

    public Prato(String nome, double valor){
        this.nome= nome;
        this.valor= valor;
        this.tipoPrato= tipoPrato.PRINCIPAL;
    }

}