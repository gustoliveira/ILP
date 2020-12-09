public class Professor {
    private String nome;
    private String dataAdmissao;

    private int id;
    private String nomeDepartamento;
    private Sigla sigla;
    private Departamento departamento;

    private final String DATA = "01/01/2009";

    public Professor(String nome, String dataAdmissao, int id, String nomeDepartamento) {
        this.nome = nome;
        this.dataAdmissao = dataAdmissao;
        this.id = id;
        setDepartamento(nomeDepartamento);
    }

    public Professor(String nome, int id, String nomeDepartamento) {
        this.nome = nome;
        this.dataAdmissao = DATA;
        this.id = id;
        this.departamento = setDepartamento(nomeDepartamento);
    }

    public Professor(String nome, String dataAdmissao, int id, int numeroDepartamento) {
        this.nome = nome;
        this.dataAdmissao = dataAdmissao;
        this.id = id;
        this.departamento = setDepartamento(numeroDepartamento);
    }

    public Professor(String nome, int id, int numeroDepartamento) {
        this.nome = nome;
        this.dataAdmissao = DATA;
        this.id = id;
        this.departamento = setDepartamento(numeroDepartamento);
    }

    public Professor(String nome, String dataAdmissao, int id, Sigla siglaDepartamento) {
        this.nome = nome;
        this.dataAdmissao = dataAdmissao;
        this.id = id;
        this.departamento = setDepartamento(siglaDepartamento);
    }

    public Professor(String nome, int id, Sigla siglaDepartamento) {
        this.nome = nome;
        this.dataAdmissao = DATA;
        this.id = id;
        this.departamento = setDepartamento(siglaDepartamento);
    }

    public Departamento setDepartamento(int idNovoDepartamento){
        switch(idNovoDepartamento) {
            case 1:
                return new Departamento(
                    Sigla.DepartamentoEnum.DEPARTAMENTO_CC.toString(),
                    new Sigla(Sigla.DepartamentoEnum.DEPARTAMENTO_CC),
                    idNovoDepartamento
                );
            case 2:
                return new Departamento(
                    Sigla.DepartamentoEnum.DEPARTAMENTO_FIS.toString(),
                    new Sigla(Sigla.DepartamentoEnum.DEPARTAMENTO_FIS),
                    idNovoDepartamento
                );
            case 3:
                return new Departamento(
                    Sigla.DepartamentoEnum.DEPARTAMENTO_MAT.toString(),
                    new Sigla(Sigla.DepartamentoEnum.DEPARTAMENTO_MAT),
                    idNovoDepartamento
                );
            case 4:
                return new Departamento(
                    Sigla.DepartamentoEnum.DEPARTAMENTO_MUS.toString(),
                    new Sigla(Sigla.DepartamentoEnum.DEPARTAMENTO_MUS),
                    idNovoDepartamento
                );
            default:
                return new Departamento(
                    Sigla.DepartamentoEnum.INV.toString(),
                    new Sigla(Sigla.DepartamentoEnum.INV),
                    idNovoDepartamento
                );
        }
    }

    public Departamento setDepartamento(Sigla siglaDepartamento){
        return setDepartamento(siglaDepartamento.toString());
    }

    public Departamento setDepartamento(String nomeDepartamento){
        if(nomeDepartamento.equals(Sigla.DepartamentoEnum.DEPARTAMENTO_CC.toString())){
            this.nomeDepartamento = nomeDepartamento;
            this.sigla = new Sigla(Sigla.DepartamentoEnum.DEPARTAMENTO_CC);
            this.id = 1;
        }
        else if (nomeDepartamento.equals(Sigla.DepartamentoEnum.DEPARTAMENTO_FIS.toString())){
            this.nomeDepartamento = nomeDepartamento;
            this.sigla = new Sigla(Sigla.DepartamentoEnum.DEPARTAMENTO_FIS);
            this.id = 2;
        }
        else if (nomeDepartamento.equals(Sigla.DepartamentoEnum.DEPARTAMENTO_MAT.toString())){
            this.nomeDepartamento = nomeDepartamento;
            this.sigla = new Sigla(Sigla.DepartamentoEnum.DEPARTAMENTO_MAT);
            this.id = 3;

        }
        else if (nomeDepartamento.equals(Sigla.DepartamentoEnum.DEPARTAMENTO_MUS.toString())){
            this.nomeDepartamento = nomeDepartamento;
            this.sigla = new Sigla(Sigla.DepartamentoEnum.DEPARTAMENTO_MUS);
            this.id = 4;

        }
        else {
            this.nomeDepartamento = Sigla.DepartamentoEnum.INV.toString();
            this.sigla = new Sigla(Sigla.DepartamentoEnum.INV);
            this.id = 5;
        }

        return new Departamento(nomeDepartamento, sigla, id);
    }

    public void exibirProfessor(){
        System.out.println("Nome: " + this.nome + ", Data de Admissão: " + this.dataAdmissao + ", Número do Registro: " + this.id + "\nDepartamento: " + this.nomeDepartamento + "\nEnumDepartamento: " + this.departamento);
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
        return this.id;
    }

    public void setNumeroRegistro(int id) {
        this.id = id;
    }

    public String getNomeDepartamento() {
        return this.nomeDepartamento;
    }

    public void setNomeDepartamento(String nomeDepartamento) {
        this.nomeDepartamento = nomeDepartamento;
    }

}
