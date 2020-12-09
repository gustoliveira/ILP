public class Professor {
    public enum Departamento {
        DEPARTAMENTO_CC, DEPARTAMENTO_MAT, DEPARTAMENTO_FIS, DEPARTAMENTO_MUS, INV;
    }
    private Departamento departamento;

    private String nome;
    private String dataAdmissao;
    private int numeroRegistro;
    private String nomeDepartamento;

    final private String DATA = "01/01/2009";

    public Professor(String nome, String dataAdmissao, int numeroRegistro, String nomeDepartamento) {
        this.nome = nome;
        this.dataAdmissao = dataAdmissao;
        this.numeroRegistro = numeroRegistro;
        setDepartamento(nomeDepartamento);
    }

    public Professor(String nome, int numeroRegistro, String nomeDepartamento) {
        this.nome = nome;
        this.dataAdmissao = DATA;
        this.numeroRegistro = numeroRegistro;
        setDepartamento(nomeDepartamento);
    }

    public Professor(String nome, String dataAdmissao, int numeroRegistro, int numeroDepartamento) {
        this.nome = nome;
        this.dataAdmissao = dataAdmissao;
        this.numeroRegistro = numeroRegistro;
        setDepartamento(numeroDepartamento);
    }

    public Professor(String nome, int numeroRegistro, int numeroDepartamento) {
        this.nome = nome;
        this.dataAdmissao = DATA;
        this.numeroRegistro = numeroRegistro;
        setDepartamento(numeroDepartamento);
    }

    public Professor(String nome, String dataAdmissao, int numeroRegistro, Departamento enumDepartamento) {
        this.nome = nome;
        this.dataAdmissao = dataAdmissao;
        this.numeroRegistro = numeroRegistro;
        setDepartamento(enumDepartamento);
    }

    public Professor(String nome, int numeroRegistro, Departamento enumDepartamento) {
        this.nome = nome;
        this.dataAdmissao = DATA;
        this.numeroRegistro = numeroRegistro;
        setDepartamento(enumDepartamento);
    }

    public void setDepartamento(Departamento enumDepartamento){
        this.departamento = enumDepartamento;
        this.nomeDepartamento = enumDepartamento.toString();
        System.out.println("Teste");
    }

    public void setDepartamento(String nomeDepartamento){
        if(nomeDepartamento.equals(Departamento.DEPARTAMENTO_CC.toString())){
            this.nomeDepartamento = nomeDepartamento;
            this.departamento = Departamento.DEPARTAMENTO_CC;
        }
        else if (nomeDepartamento.equals(Departamento.DEPARTAMENTO_FIS.toString())){
            this.nomeDepartamento = nomeDepartamento;
            this.departamento = Departamento.DEPARTAMENTO_FIS;
        }
        else if (nomeDepartamento.equals(Departamento.DEPARTAMENTO_MAT.toString())){
            this.nomeDepartamento = nomeDepartamento;
            this.departamento = Departamento.DEPARTAMENTO_MAT;
        }
        else if (nomeDepartamento.equals(Departamento.DEPARTAMENTO_MUS.toString())){
            this.nomeDepartamento = nomeDepartamento;
            this.departamento = Departamento.DEPARTAMENTO_MUS;
        }
        else {
            this.nomeDepartamento = Departamento.INV.toString();
            this.departamento = Departamento.INV;
        }
    }

    public void setDepartamento(int idDepartamento){
        switch(idDepartamento) {
            case 1:
                this.departamento = Departamento.DEPARTAMENTO_CC;
                this.nomeDepartamento = Departamento.DEPARTAMENTO_CC.toString();
                break;
            case 2:
                this.departamento = Departamento.DEPARTAMENTO_FIS;
                this.nomeDepartamento = Departamento.DEPARTAMENTO_FIS.toString();
                break;
            case 3:
                this.departamento = Departamento.DEPARTAMENTO_MAT;
                this.nomeDepartamento = Departamento.DEPARTAMENTO_MAT.toString();
                break;
            case 4:
                this.departamento = Departamento.DEPARTAMENTO_MUS;
                this.nomeDepartamento = Departamento.DEPARTAMENTO_MUS.toString();
                break;
            default:
                this.departamento = Departamento.INV;
                this.nomeDepartamento = Departamento.INV.toString();
                break;
        }
    }

    public void exibirProfessor(){
        System.out.println("Nome: " + this.nome + ", Data de Admissão: " + this.dataAdmissao + ", Número do Registro: " + this.numeroRegistro + "\nDepartamento: " + this.nomeDepartamento + "\nEnumDepartamento: " + this.departamento);
    }

    public Departamento getDepartamento() {
        return this.departamento;
    }


    public String getNome() {
        return this.nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getDataAdmissao() {
        return this.dataAdmissao;
    }

    public void setDataAdmissao(String dataAdmissao) {
        this.dataAdmissao = dataAdmissao;
    }

    public int getNumeroRegistro() {
        return this.numeroRegistro;
    }

    public void setNumeroRegistro(int numeroRegistro) {
        this.numeroRegistro = numeroRegistro;
    }

    public String getNomeDepartamento() {
        return this.nomeDepartamento;
    }

    public void setNomeDepartamento(String nomeDepartamento) {
        this.nomeDepartamento = nomeDepartamento;
    }

}
