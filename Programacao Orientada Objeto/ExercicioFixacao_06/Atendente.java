public class Atendente {
    private String curso;
    private static int controleMatricula;

    public Atendente(String curso) {
        this.curso = curso;
    }

    public Aluno matricula(String nomeAluno){
        this.gerarMatricula();
        System.out.println(controleMatricula);
        Aluno aluno = new Aluno(nomeAluno, this.curso, controleMatricula);

        System.out.println("O aluno " + nomeAluno + ", está matricula no curso " + this.curso + " e possui matricula com número: " + controleMatricula);

        return aluno;
    }

    private void gerarMatricula(){
        controleMatricula++;
    }

    public String getCurso() {
        // System.out.println("QUE PORRA È ESSAAAAAAAAAAAA " + this.curso);
        return this.curso;
    }

    public void setCurso(String curso) {
        this.curso = curso;
    }


}
