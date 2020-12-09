public class Departamento {
    private String nome;
    private Sigla sigla;
    private int id;

    public Departamento(String nome, Sigla sigla, int id){
        this.nome = nome;
        this.sigla = sigla;
        this.id = id;
    }

    public Departamento mudarDepartamento(Departamento departamentoAtual, Sigla siglaNovoDepartamento){
        if(siglaNovoDepartamento.getEnumDepartamento().equals(Sigla.DepartamentoEnum.DEPARTAMENTO_CC)){
            departamentoAtual.setSigla(siglaNovoDepartamento);
            departamentoAtual.setNome(Sigla.DepartamentoEnum.DEPARTAMENTO_CC.toString());
            departamentoAtual.setId(1);
        }
        else if (siglaNovoDepartamento.getEnumDepartamento().equals(Sigla.DepartamentoEnum.DEPARTAMENTO_FIS)){
            departamentoAtual.setSigla(siglaNovoDepartamento);
            departamentoAtual.setNome(Sigla.DepartamentoEnum.DEPARTAMENTO_FIS.toString());
            departamentoAtual.setId(2);
        }
        else if (siglaNovoDepartamento.getEnumDepartamento().equals(Sigla.DepartamentoEnum.DEPARTAMENTO_MAT)){
            departamentoAtual.setSigla(siglaNovoDepartamento);
            departamentoAtual.setNome(Sigla.DepartamentoEnum.DEPARTAMENTO_MAT.toString());
            departamentoAtual.setId(3);
        }
        else if (siglaNovoDepartamento.getEnumDepartamento().equals(Sigla.DepartamentoEnum.DEPARTAMENTO_MUS)){
            departamentoAtual.setSigla(siglaNovoDepartamento);
            departamentoAtual.setNome(Sigla.DepartamentoEnum.DEPARTAMENTO_MUS.toString());
            departamentoAtual.setId(4);
        }
        else {
            departamentoAtual.setSigla(siglaNovoDepartamento);
            departamentoAtual.setNome(Sigla.DepartamentoEnum.INV.toString());
            departamentoAtual.setId(5);
        }
        return departamentoAtual;
    }

    public Departamento mudarDepartamento(Departamento departamentoAtual, int idNovoDepartamento){
            switch(idNovoDepartamento) {
                case 1:
                    departamentoAtual.setSigla(new Sigla(Sigla.DepartamentoEnum.DEPARTAMENTO_CC));
                    departamentoAtual.setNome(Sigla.DepartamentoEnum.DEPARTAMENTO_CC.toString());
                    departamentoAtual.setId(idNovoDepartamento);
                    break;
                case 2:
                    departamentoAtual.setSigla(new Sigla(Sigla.DepartamentoEnum.DEPARTAMENTO_FIS));
                    departamentoAtual.setNome(Sigla.DepartamentoEnum.DEPARTAMENTO_FIS.toString());
                    departamentoAtual.setId(idNovoDepartamento);
                    break;
                case 3:
                    departamentoAtual.setSigla(new Sigla(Sigla.DepartamentoEnum.DEPARTAMENTO_MAT));
                    departamentoAtual.setNome(Sigla.DepartamentoEnum.DEPARTAMENTO_MAT.toString());
                    departamentoAtual.setId(idNovoDepartamento);
                    break;
                case 4:
                    departamentoAtual.setSigla(new Sigla(Sigla.DepartamentoEnum.DEPARTAMENTO_MUS));
                    departamentoAtual.setNome(Sigla.DepartamentoEnum.DEPARTAMENTO_MUS.toString());
                    departamentoAtual.setId(idNovoDepartamento);
                    break;
                default:
                    departamentoAtual.setSigla(new Sigla(Sigla.DepartamentoEnum.INV));
                    departamentoAtual.setNome(Sigla.DepartamentoEnum.INV.toString());
                    departamentoAtual.setId(idNovoDepartamento);
                    break;
            }
        return departamentoAtual;
    }

    public String getNome() {
        return this.nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public Sigla getSigla() {
        return this.sigla;
    }

    public void setSigla(Sigla sigla) {
        this.sigla = sigla;
    }

    public int getId() {
        return this.id;
    }

    public void setId(int id) {
        this.id = id;
    }

}