public class Publicacao {
    private String titulo;
    private String anoPublicacao;
    private String veiculoPublicacao;
    private int numTotalCopias;
    private static double tempoMaximoLocacao;

    public Publicacao(String titulo, String anoPublicacao, String veiculoPublicacao, int numTotalCopias, double tempoMaximoLocacao) {
        this.titulo = titulo;
        this.anoPublicacao = anoPublicacao;
        this.veiculoPublicacao = veiculoPublicacao;
        this.numTotalCopias = numTotalCopias;
        this.tempoMaximoLocacao = tempoMaximoLocacao;
    }

    public String getTitulo() {
        return this.titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public String getAnoPublicacao() {
        return this.anoPublicacao;
    }

    public void setAnoPublicacao(String anoPublicacao) {
        this.anoPublicacao = anoPublicacao;
    }

    public String getVeiculoPublicacao() {
        return this.veiculoPublicacao;
    }

    public void setVeiculoPublicacao(String veiculoPublicacao) {
        this.veiculoPublicacao = veiculoPublicacao;
    }

    public int getNumTotalCopias() {
        return this.numTotalCopias;
    }

    public void setNumTotalCopias(int numTotalCopias) {
        this.numTotalCopias = numTotalCopias;
    }

    public double getTempoMaximoLocacao() {
        return this.tempoMaximoLocacao;
    }

    public void setTempoMaximoLocacao(double tempoMaximoLocacao) {
        this.tempoMaximoLocacao = tempoMaximoLocacao;
    }

}
