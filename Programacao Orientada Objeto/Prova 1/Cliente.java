// Estou mandando atrasado pois minha internet caiu, e aí perdi um certo tentando fazer ela voltar
// e não foi possível terminar no tempo correto, a que mandei na versão final tem alguns erros e estou ciente
// não os fiz pq realmente não tive tempo (inclusive não mandei a versão parcial por este motivo, não tinha internet)
// mas mesmo após terminar continue testando pra poder consertar e aqui está a versão final

public class Cliente {
    private String nome;
    private String cpf;
    private int qntdAcompanhantes;
    private double valorConta = 0;

    private Prato[] pratos;
    private int qntdPratosConsumidos = 0;

    public Cliente(String nome, String cpf, int qntdAcompanhantes){
        this.nome = nome;
        this.cpf = cpf;
        this.qntdAcompanhantes = qntdAcompanhantes;
        this.pratos = new Prato[30];
        for(int i = 0; i < 30; i++){
            this.pratos[i] = new Prato("",  0n);
        }
    }

    public Cliente(String nome, String cpf){
        this.nome = nome;
        this.cpf = cpf;
        this.qntdAcompanhantes = 1;
    }

	public String getNome() {
		return this.nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getCpf() {
		return this.cpf;
	}

	public void setCpf(String cpf) {
		this.cpf = cpf;
	}

	public int getQntdAcompanhantes() {
		return this.qntdAcompanhantes;
	}

	public void setQntdAcompanhantes(int qntdAcompanhantes) {
		this.qntdAcompanhantes = qntdAcompanhantes;
	}

	public double getValorConta() {
		return this.valorConta;
	}

	public void setValorConta(double valorConta) {
		this.valorConta = valorConta;
	}

	public int getQntdPratosConsumidos() {
		return this.qntdPratosConsumidos;
	}

	public void setQntdPratosConsumidos(int qntdPratosConsumidos) {
		this.qntdPratosConsumidos = qntdPratosConsumidos;
	}

	public Prato[] getPratos() {
		return this.pratos;
	}

	public void setPratos(Prato[] pratos) {
		this.pratos = pratos;
	}

    public void showConta(){
        System.out.println("Nome: " + this.nome + ", CPF: " + this.cpf);

        for(int i = 0; i < qntdPratosConsumidos; i++){
            System.out.println("Nome prato: " + pratos[i].getNome() + ", Valor prato: " + pratos[i].getValor());
            this.valorConta += this.pratos[i].getValor();
        }

        System.out.println(this.valorConta);
    }

    public boolean adicionarPrato(Prato prato){
        if(qntdPratosConsumidos >= 30) return false;
        else {
            System.out.println("De");
            this.pratos[qntdPratosConsumidos] = prato;
            this.qntdPratosConsumidos++;
            return true;
        }
    }

    public boolean adicionarPrato(Prato prato, int qntPratos){
        if(this.qntdPratosConsumidos >= 30) return false;
        else {
            if(this.qntdPratosConsumidos + qntPratos > 30){
                for(int i = this.qntdPratosConsumidos; i < 30; i++){
                    this.pratos[i] = prato;
                }
                this.qntdPratosConsumidos = 30;
            }
            else {
                int aux = this.qntdPratosConsumidos + qntPratos;
                for(int i = this.qntdPratosConsumidos; i < aux; i++){
                    this.pratos[i] = prato;
                }
                this.qntdPratosConsumidos = aux;
            }
            return true;
        }
    }


}