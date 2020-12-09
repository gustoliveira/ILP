public class Revista {
    private String nome;
    private String editora;
    private float preco;

    public Revista(String nome, String editora, float preco){
        this.nome = nome;
        this.editora = editora;
        this.preco = preco;
    }


    public String getNome() {
        return this.nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getEditora() {
        return this.editora;
    }

    public void setEditora(String editora) {
        this.editora = editora;
    }

    public float getPreco() {
        return this.preco;
    }

    public void setPreco(float preco) {
        this.preco = preco;
    }

}
