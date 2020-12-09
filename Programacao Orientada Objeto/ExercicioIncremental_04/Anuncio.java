// Gustavo de Oliveira Ferreira

public class Anuncio {
    private String tituloAnuncio;
    private float preco;
    private boolean isAtivo;
    private boolean isTroca;
    private Assinante anunciante;
    private int tamanhoListaLivros;
    private Livro[] listaLivros;

    public Anuncio(Assinante anunciante, String tituloAnuncio, float preco, boolean isAtivo, Livro[] listaLivros, int tamanhoListaLivros){
        this.anunciante = anunciante;
        this.tituloAnuncio = tituloAnuncio;
        this.preco = preco;
        this.isAtivo = isAtivo;
        this.isTroca = (preco != 0);
        this.listaLivros = listaLivros;
        this.tamanhoListaLivros = tamanhoListaLivros;
    }

    public Anuncio(Assinante anunciante, String tituloAnuncio, boolean isAtivo, Livro[] listaLivros, int tamanhoListaLivros){
        this(anunciante, tituloAnuncio, 0, isAtivo, listaLivros, tamanhoListaLivros);
    }

    public Anuncio(Assinante anunciante, String tituloAnuncio, float preco, boolean isAtivo, Livro[] listaLivros){
        this(anunciante, tituloAnuncio, preco, isAtivo, listaLivros, listaLivros.length);
    }

    public Anuncio(Assinante anunciante, String tituloAnuncio, boolean isAtivo, Livro[] listaLivros){
        this(anunciante, tituloAnuncio, 0, isAtivo, listaLivros, listaLivros.length);
    }

    public String showAnuncio(){
        String auxLivros = "";

        for(int i = 0; i < tamanhoListaLivros; i++){
            String identificador = listaLivros[i].getTitulo();
            String auxLivroAtual = listaLivros[i].consultaLivro(identificador);

            auxLivros = auxLivros + "Livro " + (i+1) + ": \n" + auxLivroAtual + "\n";
        }

        return "Nome do anunciante: " + this.anunciante.getNome() + "\n" + auxLivros;
    }

    public void isAnunciaTroca(){
        if(this.isTroca) System.out.println("É um anuncio de Troca");
        else System.out.println("Não é um anuncio de Troca");
    }


    public String getTituloAnuncio() {
        return this.tituloAnuncio;
    }

    public void setTituloAnuncio(String tituloAnuncio) {
        this.tituloAnuncio = tituloAnuncio;
    }

    public float getPreco() {
        return this.preco;
    }

    public void setPreco(float preco) {
        this.preco = preco;
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

    public int getTamanhoListaLivros() {
        return this.tamanhoListaLivros;
    }

    public void setTamanhoListaLivros(int tamanhoListaLivros) {
        this.tamanhoListaLivros = tamanhoListaLivros;
    }

    public Livro[] getListaLivros() {
        return this.listaLivros;
    }

    public void setListaLivros(Livro[] listaLivros) {
        this.listaLivros = listaLivros;
    }

}
