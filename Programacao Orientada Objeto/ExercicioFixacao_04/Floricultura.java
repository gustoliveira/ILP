public class Floricultura {

    private Cartao cartao;

    public Floricultura(Cartao cartao){
        this.cartao = cartao;
    }

    public void comprarFlores(String nomeDestinatario, String enderecoDestinatario, String horario){
        Destinario destinatario = new Destinario(nomeDestinatario, enderecoDestinatario);

        this.cartao.setDestinatario(destinatario);
        this.cartao.setHorarioEntrega(horario);

        this.cartao.mostrarMensagem();
    }

    public Cartao getCartao() {
        return this.cartao;
    }

    public void setCartao(Cartao cartao) {
        this.cartao = cartao;
    }

}
