public class Livro {
    private String nome;
    private String autor;
    private float preco;

    public Livro(String nome, String autor, float preco){
        this.nome = nome;
        this.autor = autor;
        this.preco = preco;
    }


    public String getNome() {
        return this.nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getAutor() {
        return this.autor;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    public float getPreco() {
        return this.preco;
    }

    public void setPreco(float preco) {
        this.preco = preco;
    }

}
