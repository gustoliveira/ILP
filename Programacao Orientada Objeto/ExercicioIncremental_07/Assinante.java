// Gustavo de Oliveira Ferreira

import java.util.ArrayList;

public class Assinante {

    private String cpf;
    private String nome;
    private String endereco;
    private String telefone;
    private ArrayList<AnuncioVenda> anunciosAssinanteVenda;
    private ArrayList<AnuncioTroca> anunciosAssinanteTroca;

    public Assinante(String cpf, String nome, String endereco, String telefone) {
        this.cpf = cpf;
        this.nome = nome;
        this.endereco = endereco;
        this.anunciosAssinanteTroca = new ArrayList<AnuncioTroca>();
        this.anunciosAssinanteVenda = new ArrayList<AnuncioVenda>();

        if(telefone.length() != 9 && telefone.length() != 11){
            System.out.println("O número não está no formato correto, tente novamento");
        }
        else {
            this.telefone = ((telefone.length() == 9) ? "71" + telefone : telefone);
        }
    }

    // Consulta o assinante de acordo um identficador que pode ser o nome ou telefone do assintante
    // Retorna uma String contendo todas as informações
    // Na implementação utiliza-se como identificador apenas o nome do assinante
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

    // Adiciona um anuncio da lista de anuncios do Assinante com base no titulo do anuncio
    public void adicionarAnuncio(AnuncioTroca anuncio, Assinante selfAssinante){
        this.anunciosAssinanteTroca.add(anuncio);
        anuncio.setAnunciante(selfAssinante);
    }

    public void adicionarAnuncio(AnuncioVenda anuncio, Assinante selfAssinante){
        this.anunciosAssinanteVenda.add(anuncio);
        anuncio.setAnunciante(selfAssinante);
    }

    // Remove um anuncio da lista de anuncios do Assinante com base no titulo do anuncio
    public void removerAnuncio(String tituloAnuncio){
        int length = anunciosAssinanteTroca.size();
        for(int i = 0; i < length; i++){
            if(anunciosAssinanteTroca.get(i).getTituloAnuncio() == tituloAnuncio) {
                this.anunciosAssinanteTroca.remove(i);
                break;
            }
        }

        length = anunciosAssinanteVenda.size();
        for(int i = 0; i < length; i++){
            if(anunciosAssinanteVenda.get(i).getTituloAnuncio() == tituloAnuncio) {
                this.anunciosAssinanteVenda.remove(i);
                break;
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

    public ArrayList<AnuncioVenda> getAnunciosAssinanteVenda() {
        return this.anunciosAssinanteVenda;
    }

    public void setAnunciosAssinanteVenda(ArrayList<AnuncioVenda> anunciosAssinanteVenda) {
        this.anunciosAssinanteVenda = anunciosAssinanteVenda;
    }

    public ArrayList<AnuncioTroca> getAnunciosAssinanteTroca() {
        return this.anunciosAssinanteTroca;
    }

    public void setAnunciosAssinanteTroca(ArrayList<AnuncioTroca> anunciosAssinanteTroca) {
        this.anunciosAssinanteTroca = anunciosAssinanteTroca;
    }
}
