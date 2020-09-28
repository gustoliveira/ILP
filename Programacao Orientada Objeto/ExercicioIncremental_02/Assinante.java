// Gustavo de Oliveira Ferreira

public class Assinante {

    private String cpf;
    private String nome;
    private String endereco;
    private String telefone;


    public Assinante(String cpf, String nome, String endereco, String telefone) {
        this.cpf = cpf;
        this.nome = nome;
        this.endereco = endereco;

        this.telefone = ((telefone.length() <= 9) ? "71"+telefone : telefone);
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


    public void consultaAssinante(String identificador) {

        char[] identificadorChar = identificador.toCharArray();
        boolean flag = true;

        for(int i = 0; i < identificadorChar.length; i++){
            if(!Character.isDigit(identificadorChar[i])){
                flag = false;
                break;
            }
        }

        if(flag){
            if(identificador.equals(this.telefone)){
                System.out.println("De acordo com o número dado, estas são as informações sobre o assinante:");
                System.out.println("Nome: " + this.nome + "\nCPF: " + this.cpf + "\nEndereço: " + this.endereco + "\nTelefone: " + this.telefone);
            }
            else {
                System.out.println("Não há nenhum assinante com este número");
            }
        }
        else {
            if(identificador.equals(this.nome)){
                System.out.println("De acordo com o nome dado, estas são as informações sobre o assinante:");
                System.out.println("Nome: " + this.nome + "\nCPF: " + this.cpf + "\nEndereço: " + this.endereco + "\nTelefone: " + this.telefone);
                }
            else {
                System.out.println("Não há nenhum assinante com este nome");
            }
        }

    }

}