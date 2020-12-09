public class Cartao {
    private Destinario destinatario;
    private String nomeEmissario;
    private String mensagem;
    private String horarioEntrega;
    private String custoMensagem;

    public Cartao(String nomeEmissario, String mensagem, String custoMensagem){
        this.nomeEmissario = nomeEmissario;
        this.mensagem = mensagem;
        this.horarioEntrega = "0000";
        this.custoMensagem = custoMensagem;
    }

    public Cartao(String nomeEmissario, String mensagem, String horario, String custoMensagem){
        this.nomeEmissario = nomeEmissario;
        this.mensagem = mensagem;
        this.horarioEntrega = horario;
        this.custoMensagem = custoMensagem;
    }


    public void mostrarMensagem(){
        System.out.println("Nome destinatário: " + this.destinatario.nome + "\nEndereço destinatário: " + this.destinatario.endereco);
        System.out.println("Nome emissário: " + this.nomeEmissario + "\nMensagem: " + this.mensagem);
        System.out.println("Horário Entrega: " + this.horarioEntrega + ", Custo da mensagem: " + this.custoMensagem);
    }

    public Destinario getDestinatario() {
        return this.destinatario;
    }

    public void setDestinatario(Destinario destinatario) {
        this.destinatario = destinatario;
    }

    public String getNomeEmissario() {
        return this.nomeEmissario;
    }

    public void setNomeEmissario(String nomeEmissario) {
        this.nomeEmissario = nomeEmissario;
    }

    public String getMensagem() {
        return this.mensagem;
    }

    public void setMensagem(String mensagem) {
        this.mensagem = mensagem;
    }

    public String getHorarioEntrega() {
        return this.horarioEntrega;
    }

    public void setHorarioEntrega(String horarioEntrega) {
        this.horarioEntrega = horarioEntrega;
    }

    public String getCustoMensagem() {
        return this.custoMensagem;
    }

    public void setCustoMensagem(String custoMensagem) {
        this.custoMensagem = custoMensagem;
    }

}
