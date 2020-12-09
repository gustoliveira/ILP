public class Aluno {
    private int matricula;
    private String nome;
    private String curso;

    public Aluno(String nome, String curso, int matricula) {
        this.matricula = matricula;
        this.nome = nome;
        this.curso = curso;
    }

    public void mostrarAluno(){
        System.out.println("O aluno " + this.nome + ", está matricula no curso " + this.curso + " e possui matricula com número: " + this.matricula);
    }

    public int getMatricula() {
        return this.matricula;
    }

    public void setMatricula(int matricula) {
        this.matricula = matricula;
    }

    public String getNome() {
        return this.nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getCurso() {
        return this.curso;
    }

    public void setCurso(String curso) {
        this.curso = curso;
    }

}