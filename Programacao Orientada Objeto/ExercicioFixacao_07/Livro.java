import java.util.ArrayList;

public class Livro extends Publicacao {
    private String ISBN;
    private EnumPublicacao tipoPublicacao;

    public Livro(String titulo, String anoPublicacao, String veiculoPublicacao, int numTotalCopias, double tempoMaximoLocacao, String ISBN) {
        super(titulo, anoPublicacao, veiculoPublicacao, numTotalCopias, tempoMaximoLocacao);
        this.ISBN = ISBN;
        this.tipoPublicacao = EnumPublicacao.LIVRO_ENUM;

    }

    public EnumPublicacao getTipoPublicacao() {
        return this.tipoPublicacao;
    }

    public void setTipoPublicacao(EnumPublicacao tipoPublicacao) {
        this.tipoPublicacao = tipoPublicacao;
    }

    public String getISBN() {
        return this.ISBN;
    }

    public void setISBN(String ISBN) {
        this.ISBN = ISBN;
    }

}
