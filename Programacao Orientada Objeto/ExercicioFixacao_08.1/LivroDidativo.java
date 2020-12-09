public class LivroDidativo {
    private String nome;
    private String materia;
    private float preco;

    public LivroDidativo(String nome, String materia, float preco) {
        this.nome = nome;
        this.materia = materia;
        this.preco = preco;
    }

    public String getNome() {
        return this.nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getMateria() {
        return this.materia;
    }

    public void setMateria(String materia) {
        this.materia = materia;
    }

    public float getPreco() {
        return this.preco;
    }

    public void setPreco(float preco) {
        this.preco = preco;
    }

}
