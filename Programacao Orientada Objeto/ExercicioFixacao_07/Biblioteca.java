import java.util.ArrayList;

public class Biblioteca {
    private String nome;
    private String endereco;
    private ArrayList<Livro> conjuntoLivro;
    private ArrayList<Artigo> conjuntoArtigo;

    public Biblioteca(String nome, String endereco, ArrayList<Livro> conjuntoLivro, ArrayList<Artigo> conjuntoArtigo){
        this.nome = nome;
        this.endereco = endereco;
        this.conjuntoLivro = conjuntoLivro;
        this.conjuntoArtigo = conjuntoArtigo;
    }

    public String alocarPublicacao(String publicacaoNome){
        int lenght = conjuntoArtigo.size() + conjuntoLivro.size();

        for(int i = 0; i < conjuntoArtigo.size(); i++){
            // System.out.println("TESTE ARTIGO");
            Artigo artigo = conjuntoArtigo.get(i);

            if(artigo.getTitulo().equals(publicacaoNome)){
                if(artigo.getNumTotalCopias() == 0) {
                    return "Não pode ser locado";
                }
                else {
                    if(artigo.getAnoPublicacao().equals("2020")) {
                        int numTotalCopias = artigo.getNumTotalCopias();
                        artigo.setNumTotalCopias(numTotalCopias - 1);
                        return "25% do tempo: " + (artigo.getTempoMaximoLocacao() / 4);
                    }
                    else {
                        int numTotalCopias = artigo.getNumTotalCopias();
                        artigo.setNumTotalCopias(numTotalCopias - 1);
                        return "100% do tempo: " + artigo.getTempoMaximoLocacao();
                    }
                }
            }
        }

        for(int i = 0; i < conjuntoLivro.size(); i++){
            Livro livro = conjuntoLivro.get(i);

            if(livro.getTitulo().equals(publicacaoNome)){
                if(livro.getNumTotalCopias() == 1) {
                    return "Não pode ser locado";
                }
                else if(livro.getNumTotalCopias() == 2) {
                    int numTotalCopias = livro.getNumTotalCopias();
                    livro.setNumTotalCopias(numTotalCopias - 1);
                    return "50% do tempo: " + (livro.getTempoMaximoLocacao() / 2);
                }
                else {
                    int numTotalCopias = livro.getNumTotalCopias();
                    livro.setNumTotalCopias(numTotalCopias - 1);
                    return "100% do tempo: " + livro.getTempoMaximoLocacao();
                }
            }

        }

        return "Não foi encontrado nenhuma publicação com este nome";
    }

    public ArrayList<Livro> getConjuntoLivro() {
        return this.conjuntoLivro;
    }

    public void setConjuntoLivro(ArrayList<Livro> conjuntoLivro) {
        this.conjuntoLivro = conjuntoLivro;
    }

    public ArrayList<Artigo> getConjuntoArtigo() {
        return this.conjuntoArtigo;
    }

    public void setConjuntoArtigo(ArrayList<Artigo> conjuntoArtigo) {
        this.conjuntoArtigo = conjuntoArtigo;
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


}
