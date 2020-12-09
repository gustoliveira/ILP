import java.util.ArrayList;

public class Artigo extends Publicacao {
    private ArrayList<String> autores = new ArrayList<String>();
    private String resumo;
    private EnumPublicacao tipoPublicacao;

    public Artigo(String titulo, String anoPublicacao, String veiculoPublicacao, int numTotalCopias, double tempoMaximoLocacao, ArrayList<String> autores, String resumo) {
        super(titulo, anoPublicacao, veiculoPublicacao, numTotalCopias, tempoMaximoLocacao);
        this.autores = autores;
        this.resumo = resumo;
        this.tipoPublicacao = EnumPublicacao.ARTIGO_ENUM;
    }


    public EnumPublicacao getTipoPublicacao() {
        return this.tipoPublicacao;
    }

    public void setTipoPublicacao(EnumPublicacao tipoPublicacao) {
        this.tipoPublicacao = tipoPublicacao;
    }

    public ArrayList<String> getAutores() {
        return this.autores;
    }

    public void setAutores(ArrayList<String> autores) {
        this.autores = autores;
    }

    public String getResumo() {
        return this.resumo;
    }

    public void setResumo(String resumo) {
        this.resumo = resumo;
    }

}
