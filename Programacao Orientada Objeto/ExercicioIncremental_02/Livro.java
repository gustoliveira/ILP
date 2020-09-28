// Gustavo de Oliveira Ferreira

public class Livro {

    private String titulo;
    private String isbn;
    private String materia;
    private String edicao;
    private int ano;
    private int anoPublicacao;

    public Livro(String titulo, String isbn, String materia, String edicao, int ano, int anoPublicacao){
        this.titulo = titulo;
        this.isbn = isbn;
        this.materia = materia;
        this.edicao = edicao;
        this.ano = ano;
        this.anoPublicacao = anoPublicacao;
    }

    public Livro(String titulo, String isbn, String materia, String edicao, int ano){
        this.titulo = titulo;
        this.isbn = isbn;
        this.materia = materia;
        this.edicao = edicao;
        this.ano = ano;
        this.anoPublicacao = 2019;
    }


    public String getTitulo() {
        return this.titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public String getIsbn() {
        return this.isbn;
    }

    public void setIsbn(String isbn) {
        this.isbn = isbn;
    }

    public String getMateria() {
        return this.materia;
    }

    public void setMateria(String materia) {
        this.materia = materia;
    }

    public String getEdicao() {
        return this.edicao;
    }

    public void setEdicao(String edicao) {
        this.edicao = edicao;
    }

    public int getAno() {
        return this.ano;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }

    public int getAnoPublicacao() {
        return this.anoPublicacao;
    }

    public void setAnoPublicacao(int anoPublicacao) {
        this.anoPublicacao = anoPublicacao;
    }

    public void consultaLivro(String identificador){

        char[] identificadorChar = identificador.toCharArray();
        boolean flag = true;

        for(int i = 0; i < identificadorChar.length; i++){
            if(!Character.isDigit(identificadorChar[i])){
                flag = false;
                break;
            }
        }

        if(flag){
            if(identificador == this.isbn){
                System.out.println("De acordo com o código ISBN dado, estas são as informações sobre o livro:");
                System.out.println("Título: " + this.titulo + "\nISBN: "+ this.isbn +"\nMatéria: " + this.materia + "\nEdição: " + this.edicao + "\nAno: " + this.ano+"\nAno de publicação: " + this.anoPublicacao);
            }
            else {
                System.out.println("Não há nenhum livro com este código ISBN");
            }
        }
        else {
            if(identificador == this.titulo){
                System.out.println("De acordo com o título dado, estas são as informações sobre o livro:");
                System.out.println("Título: " + this.titulo + "\nISBN: "+ this.isbn +"\nMatéria: " + this.materia + "\nEdição: " + this.edicao + "\nAno: " + this.ano+"\nAno de publicação: " + this.anoPublicacao);
            }
            else {
                System.out.println("Não há nenhum livro com este título");
            }
        }
    }

}