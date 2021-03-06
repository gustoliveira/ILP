// // Gustavo de Oliveira Ferreira

// import java.util.ArrayList;

// public class Anuncio {
//     private String tituloAnuncio;
//     private float preco;
//     private boolean isAtivo;
//     private boolean isTroca;
//     private Assinante anunciante;
//     private ArrayList<Livro> listaLivros;

//     public Anuncio(String tituloAnuncio, float preco, boolean isAtivo, ArrayList<Livro> listaLivros){
//         this.tituloAnuncio = tituloAnuncio;
//         this.preco = preco;
//         this.isAtivo = isAtivo;
//         this.isTroca = (preco != 0);
//         this.listaLivros = listaLivros;
//     }

//     public Anuncio(String tituloAnuncio, boolean isAtivo, ArrayList<Livro> listaLivros){
//         this(tituloAnuncio, 0, isAtivo, listaLivros);
//     }

//     public Anuncio(String tituloAnuncio, float preco, boolean isAtivo){
//         this(tituloAnuncio, preco, isAtivo, new ArrayList<Livro>());
//         this.tituloAnuncio = tituloAnuncio;
//         this.preco = preco;
//         this.isAtivo = isAtivo;
//         this.listaLivros = new ArrayList<Livro>();
//     }

//     public Anuncio(String tituloAnuncio, boolean isAtivo){
//         this(tituloAnuncio, 0, isAtivo, new ArrayList<Livro>());
//     }

//     // Concantena as informações de todos os livros da lista e retorna em uma String do Anuncio total
//     public String showAnuncio(){
//         String auxLivros = "";

//         for(int i = 0; i < this.listaLivros.size(); i++){
//             String identificador = listaLivros.get(i).getTitulo();
//             String auxLivroAtual = listaLivros.get(i).consultaLivro(identificador);

//             auxLivros = auxLivros + "Livro " + (i+1) + ": \n" + auxLivroAtual + "\n";
//         }

//         return auxLivros;
//     }

//     // Adiciona um livro ao anuncio sem que ele tenha de ser declarado ao instanciar o anuncio
//     public void adicionarLivro(Livro livro){
//         this.listaLivros.add(livro);
//     }

//     // Se é um anuncio de troca ou não
//     public void isAnunciaTroca(){
//         if(this.isTroca) System.out.println("É um anuncio de Troca");
//         else System.out.println("Não é um anuncio de Troca");
//     }


//     public String getTituloAnuncio() {
//         return this.tituloAnuncio;
//     }

//     public void setTituloAnuncio(String tituloAnuncio) {
//         this.tituloAnuncio = tituloAnuncio;
//     }

//     public float getPreco() {
//         return this.preco;
//     }

//     public void setPreco(float preco) {
//         this.preco = preco;
//     }

//     public boolean isIsAtivo() {
//         return this.isAtivo;
//     }

//     public boolean getIsAtivo() {
//         return this.isAtivo;
//     }

//     public void setIsAtivo(boolean isAtivo) {
//         this.isAtivo = isAtivo;
//     }

//     public boolean isIsTroca() {
//         return this.isTroca;
//     }

//     public boolean getIsTroca() {
//         return this.isTroca;
//     }

//     public void setIsTroca(boolean isTroca) {
//         this.isTroca = isTroca;
//     }

//     public Assinante getAnunciante() {
//         return this.anunciante;
//     }

//     public void setAnunciante(Assinante anunciante) {
//         this.anunciante = anunciante;
//     }

//     public ArrayList<Livro> getListaLivros() {
//         return this.listaLivros;
//     }

//     public void setListaLivros(ArrayList<Livro> listaLivros) {
//         this.listaLivros = listaLivros;
//     }

// }

// Gustavo de Oliveira Ferreira

import java.util.ArrayList;

public class Anuncio {
    protected String tituloAnuncio;
    protected boolean isAtivo;
    protected boolean isTroca;
    protected Assinante anunciante;
    protected ArrayList<Livro> listaLivros = new ArrayList<Livro>();

    public Anuncio(String tituloAnuncio, boolean isAtivo){
        this.tituloAnuncio = tituloAnuncio;
        this.isAtivo = isAtivo;
    }

    // Concantena as informações de todos os livros da lista e retorna em uma String do Anuncio total
    public String showAnuncio(){
        String auxLivros = "";

        for(int i = 0; i < this.listaLivros.size(); i++){
            String identificador = listaLivros.get(i).getTitulo();
            String auxLivroAtual = listaLivros.get(i).consultaLivro(identificador);

            auxLivros = auxLivros + "Livro " + (i+1) + ": \n" + auxLivroAtual + "\n";
        }

        return auxLivros;
    }

    // Adiciona um livro ao anuncio sem que ele tenha de ser declarado ao instanciar o anuncio
    public void adicionarLivro(Livro livro){
        this.listaLivros.add(livro);
    }

    public String getTituloAnuncio() {
        return this.tituloAnuncio;
    }

    public void setTituloAnuncio(String tituloAnuncio) {
        this.tituloAnuncio = tituloAnuncio;
    }

    public boolean isIsAtivo() {
        return this.isAtivo;
    }

    public boolean getIsAtivo() {
        return this.isAtivo;
    }

    public void setIsAtivo(boolean isAtivo) {
        this.isAtivo = isAtivo;
    }

    public boolean isIsTroca() {
        return this.isTroca;
    }

    public boolean getIsTroca() {
        return this.isTroca;
    }

    public void setIsTroca(boolean isTroca) {
        this.isTroca = isTroca;
    }

    public Assinante getAnunciante() {
        return this.anunciante;
    }

    public void setAnunciante(Assinante anunciante) {
        this.anunciante = anunciante;
    }

    public ArrayList<Livro> getListaLivros() {
        return this.listaLivros;
    }

    public void setListaLivros(ArrayList<Livro> listaLivros) {
        this.listaLivros = listaLivros;
    }
}
