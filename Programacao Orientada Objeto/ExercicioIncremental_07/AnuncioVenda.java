public class AnuncioVenda extends Anuncio {
    private float preco;

    public AnuncioVenda(String tituloAnuncio, boolean isAtivo) {
        super(tituloAnuncio, isAtivo);
    }

    @Override
    public String showAnuncio(){
        String auxLivros = "ESTE É UM ANUNCIO DE VENDA: \nPRECO: " + this.preco + "\n";

        for(int i = 0; i < this.listaLivros.size(); i++){
            String identificador = listaLivros.get(i).getTitulo();
            String auxLivroAtual = listaLivros.get(i).consultaLivro(identificador);

            auxLivros = auxLivros + "Livro " + (i+1) + ": \n" + auxLivroAtual + "\n";
        }

        return auxLivros;
    }

    public float getPreco() {
        return this.preco;
    }

    public void setPreco(float preco) {
        this.preco = preco;
    }

}
