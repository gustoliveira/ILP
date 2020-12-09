public class Funcionario {

    private String nome;
    private String endereco;
    private String telefone;
    private double salario;
    private String dataAdmissao;
    private String dataDemissao;

    private String diaHoje = "dia de hoje";

    public Funcionario(String nome, String endereco, String telefone, double salario, String dataAdmissao){
        this.nome = nome;
        this.endereco = endereco;
        this.telefone = telefone;
        this.salario = salario;
        this.dataAdmissao = dataAdmissao;
    }

    public Funcionario(String nome, String endereco, String telefone, String dataAdmissao){
        this.nome = nome;
        this.endereco = endereco;
        this.telefone = telefone;
        this.salario = 1045.00;
        this.dataAdmissao = dataAdmissao;
    }

    public Funcionario(String nome, String endereco, String telefone, double salario){
        this.nome = nome;
        this.endereco = endereco;
        this.telefone = telefone;
        this.salario = salario;
        this.dataAdmissao = this.diaHoje;
    }

    public Funcionario(String nome, String endereco, String telefone){
        this.nome = nome;
        this.endereco = endereco;
        this.telefone = telefone;
        this.salario = 1045.00;
        this.dataAdmissao = this.diaHoje;
    }

    public void demitirFuncionario(String dataDemissao){
        this.dataDemissao = dataDemissao;
    }

    public void demitirFuncionario(){
        this.dataDemissao = this.diaHoje;
    }

    public void promoverFuncionario(int percentualPromocao){
        double percentual = 1.0 + (percentualPromocao / 100.0);

        this.salario = (this.salario * (percentual));
    }

    public void promoverFuncionario(){
        this.salario = (this.salario * 1.03);
    }


    public String getNome() {
        return this.nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getEndereco() {
        return this.endereco;
    }

    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }

    public String getTelefone() {
        return this.telefone;
    }

    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }

    public double getSalario() {
        return this.salario;
    }

    public void setSalario(double salario) {
        this.salario = salario;
    }

    public String getDataAdmissao() {
        return this.dataAdmissao;
    }

    public void setDataAdmissao(String dataAdmissao) {
        this.dataAdmissao = dataAdmissao;
    }

    public String getDataDemissao() {
        return this.dataDemissao;
    }

    public void setDataDemissao(String dataDemissao) {
        this.dataDemissao = dataDemissao;
    }

}