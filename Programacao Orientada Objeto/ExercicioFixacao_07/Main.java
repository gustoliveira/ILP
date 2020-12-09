import java.util.ArrayList;

public class Main {

    // public Artigo(String titulo, String anoPublicacao, String veiculoPublicacao, int numTotalCopias, double tempoMaximoLocacao, ArrayList<String> autores, String resumo) {
    // public Livro(String titulo, String anoPublicacao, String veiculoPublicacao, int numTotalCopias, double tempoMaximoLocacao, String ISBN) {
    // public Biblioteca(String nome, String endereco, ArrayList<Publicacao> conjuntoPublicacao){
    // public String alocarPublicacao(String publicacaoNome){


    public static void main(String args []){

        ArrayList<String> autores = new ArrayList<String>();
        autores.add("Gustavo");
        autores.add("Igor");

        Artigo pub0 = new Artigo("Artigo 0", "2020", "Google Scholar", 2, 3.0, autores, "Sei lá kkk");
        Artigo pub1 = new Artigo("Artigo 1", "2019", "Google Scholar", 2, 3.0, autores, "Sei lá kkk");
        Artigo pub2 = new Artigo("Artigo 2", "2020", "Google Scholar", 2, 3.0, autores, "Sei lá kkk");
        Artigo pub3 = new Artigo("Artigo 3", "2018", "Google Scholar", 2, 3.0, autores, "Sei lá kkk");
        Artigo pub4 = new Artigo("Artigo 4", "2020", "Google Scholar", 2, 3.0, autores, "Sei lá kkk");

        Livro pub5 = new Livro("Livro 5", "2020", "Yahoo", 1, 3.0, "434234ladfjaflkjas");
        Livro pub6 = new Livro("Livro 6", "2020", "Yahoo", 2, 3.0, "uyuyuy1212121");
        Livro pub7 = new Livro("Livro 7", "2020", "Yahoo", 3, 3.0, "654654fadfadf");
        Livro pub8 = new Livro("Livro 8", "2020", "Yahoo", 4, 3.0, "adfadfa656565");
        Livro pub9 = new Livro("Livro 9", "2020", "Yahoo", 5, 3.0, "erwerw885858");

        ArrayList<Livro> listaLivro = new ArrayList<Livro>();
        ArrayList<Artigo> listaArtigo = new ArrayList<Artigo>();

        listaArtigo.add(pub0);
        listaArtigo.add(pub1);
        listaArtigo.add(pub2);
        listaArtigo.add(pub3);
        listaArtigo.add(pub4);

        listaLivro.add(pub5);
        listaLivro.add(pub6);
        listaLivro.add(pub7);
        listaLivro.add(pub8);
        listaLivro.add(pub9);

        Biblioteca biblioteca = new Biblioteca("Bibliotequinha", "Rua Graciele Ruediger", listaLivro, listaArtigo);

        // ArrayList<Livro> livros = biblioteca.getConjuntoLivro();
        // for(int i = 0; i < livros.size(); i++){
        //     System.out.println(livros.get(i).getTitulo());
        // }

        // System.out.println(biblioteca.alocarPublicacao("Livro 5"));
        // System.out.println(biblioteca.alocarPublicacao("Livro 6"));
        // System.out.println(biblioteca.alocarPublicacao("Livro 7"));
        // System.out.println(biblioteca.alocarPublicacao("Livro 8"));
        // System.out.println(biblioteca.alocarPublicacao("Livro 9"));
        // System.out.println(biblioteca.alocarPublicacao("Livro 6"));
        // System.out.println(biblioteca.alocarPublicacao("Livro 7"));
        // System.out.println(biblioteca.alocarPublicacao("Livro 7"));

        // System.out.println(biblioteca.alocarPublicacao("Livro 8"));
        System.out.println(biblioteca.alocarPublicacao("Livro 9"));
        System.out.println(biblioteca.alocarPublicacao("Livro 9"));
        System.out.println(biblioteca.alocarPublicacao("Livro 9"));
        System.out.println(biblioteca.alocarPublicacao("Livro 9"));
        System.out.println(biblioteca.alocarPublicacao("Livro 9"));



    }
}
