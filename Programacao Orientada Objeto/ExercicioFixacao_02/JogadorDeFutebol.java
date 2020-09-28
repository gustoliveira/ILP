public class JogadorDeFutebol {

    private String nome;
    private int anoDeNascimento;
    private String nacionalidade;
    private String posição;
    private double altura;
    private double peso;

    public JogadorDeFutebol(String nome, String posição, int anoDeNascimento,  String nacionalidade, double altura, double peso){
        this.nome = nome;
        this.anoDeNascimento = anoDeNascimento;
        this.nacionalidade = nacionalidade;
        this.altura = altura;
        this.peso = peso;
        this.posição = posição;
    }

    public void idadeJogador(){
        int idade = 2020 - this.anoDeNascimento;
        System.out.println(idade);
    }

    public void tempoParaAposentadoria(){
        int idade = 2020 - this.anoDeNascimento;
        switch(posição){
            case "atacante":
                if(idade >= 35){
                    System.out.println("Já está aposentado");
                }
                else {
                    System.out.println(35 - idade);
                }
                break;
            case "meiocampo":
                if(idade >= 38){
                    System.out.println("Já está aposentado");
                }
                else {
                    System.out.println(38 - idade);
                }
                break;
            case "defesa":
                if(idade >= 40){
                    System.out.println("Já está aposentado");
                }
                else {
                    System.out.println(40 - idade);
                }
                break;
            default:
                break;
        }
    }

    public void informacoesJogador(){
        System.out.println("Nome " + this.nome + ", posição: " + this.posição + ", ano de nascimento: " + this.anoDeNascimento + ", nacionalidade: " + this.nacionalidade + ", altura: " + this.altura + ", peso: " + this.peso);
    }

    public static void main(String[] args){}

}
