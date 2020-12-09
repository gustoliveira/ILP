import java.util.ArrayList;

public class AnuncioTroca extends Anuncio {
    ArrayList<Livro> livrosDesejados = new ArrayList<Livro>();

    public AnuncioTroca(String tituloAnuncio, boolean isAtivo) {
        super(tituloAnuncio, isAtivo);

    }

    @Override
    public String showAnuncio(){
        String auxLivros = "ESTE É UM ANUNCIO DE TROCA: \n";

        for(int i = 0; i < super.listaLivros.size(); i++){
            String identificador = super.listaLivros.get(i).getTitulo();
            String auxLivroAtual = super.listaLivros.get(i).consultaLivro(identificador);

            auxLivros = auxLivros + "Livro " + (i+1) + ": \n" + auxLivroAtual + "\n";
        }

        auxLivros = auxLivros + "LIVROS ACEITOS NA TROCA: \n";

        for(int i = 0; i < this.livrosDesejados.size(); i++){
            String identificador = this.listaLivros.get(i).getTitulo();
            String auxLivroAtual = this.listaLivros.get(i).consultaLivro(identificador);

            auxLivros = auxLivros + "Livro " + (i + 1) + ": \n" + auxLivroAtual + "\n";
        }

        return auxLivros;
    }

    public void adicionarLivroDesejado(String titulo, String isbn, MateriaEnum materia, String edicao, int ano, int anoPublicacao){
        Livro auxLivro = new Livro(titulo, isbn, materia, edicao, ano, anoPublicacao);

        livrosDesejados.add(auxLivro);
    }

    public void removerLivroDesejado(Livro livroRemover){
        for(int i = 0; i < this.livrosDesejados.size(); i++){
            if(this.livrosDesejados.get(i).getTitulo().equals(livroRemover.getTitulo())){
                this.livrosDesejados.remove(i);
                break;
            }
        }
    }

    public ArrayList<Livro> getLivrosDesejados() {
        return this.livrosDesejados;
    }

    public void setLivrosDesejados(ArrayList<Livro> livrosDesejados) {
        this.livrosDesejados = livrosDesejados;
    }

}
