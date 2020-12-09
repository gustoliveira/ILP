// Gustavo de Oliveira Ferreira

public class Assinante {

    private String cpf;
    private String nome;
    private String endereco;
    private String telefone;
    private Anuncio anunciosAssinante;

    public Assinante(String cpf, String nome, String endereco, String telefone) {
        this.cpf = cpf;
        this.nome = nome;
        this.endereco = endereco;

        if(telefone.length() != 9 && telefone.length() != 11){
            System.out.println("O número não está no formato correto, tente novamento");
        }
        else {
            this.telefone = ((telefone.length() == 9) ? "71" + telefone : telefone);
        }
    }

    public String consultaAssinante(String identificador) {

        char[] identificadorChar = identificador.toCharArray();
        boolean flag = true;

        for(int i = 0; i < identificadorChar.length; i++){
            if(!Character.isDigit(identificadorChar[i])){
                flag = false;
                break;
            }
        }

        if(flag){
            String aux = ((identificador.length() == 11) ? identificador : "71" + identificador);
            if(aux.equals(this.telefone)){
                return "De acordo com o número dado, estas são as informações sobre o assinante:\n" + "Nome: " + this.nome + "\nCPF: " + this.cpf + "\nEndereço: " + this.endereco + "\nTelefone: " + this.telefone;
            }
            else {
                return "Não há nenhum assinante com este número";
            }
    }
        else {
            if(identificador.equals(this.nome)){
                return "De acordo com o nome dado, estas são as informações sobre o assinante:\n" + "Nome: " + this.nome + "\nCPF: " + this.cpf + "\nEndereço: " + this.endereco + "\nTelefone: " + this.telefone;
                }
            else {
                return "Não há nenhum assinante com este nome";
            }
        }

    }

    public String getCpf() {
        return this.cpf;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }

    public String getNome() {
        return this.nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getEndereco() {
        return this.endereco;
    }

    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }

    public String getTelefone() {
        return this.telefone;
    }

    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }

    public Anuncio getAnunciosAssinante() {
        return this.anunciosAssinante;
    }

    public void setAnunciosAssinante(Anuncio anunciosAssinante) {
        this.anunciosAssinante = anunciosAssinante;
    }

}