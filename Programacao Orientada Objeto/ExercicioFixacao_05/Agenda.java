import java.util.ArrayList;

public class Agenda {
    private String nome;
    private String endereco;

    ArrayList<Contato> contatos;

    public Agenda(String nome, String endereco){
        this.nome = nome;
        this.endereco = endereco;
        this.contatos = new ArrayList<Contato>();
    }

    public void adicionarContato(String nome, String numero){
        Contato contato = new Contato(nome, numero);
        this.contatos.add(contato);
    }

    public void adicionarContato(Contato contato){
        this.contatos.add(contato);
    }

    public void removerContatoNome(String nome){
        int qntContatos = this.contatos.size();

        for(int i = 0; i < qntContatos; i++){
            if(this.contatos.get(i).getNome() == nome) {
                this.contatos.remove(i);
                break;
            }
        }
    }

    public void removerContatoTelefone(String numero){
        int qntContatos = this.contatos.size();

        for(int i = 0; i < qntContatos; i++){
            if(this.contatos.get(i).getNumero() == numero) {
                this.contatos.remove(i);
                break;
            }
        }
    }

    public void alterarNomeContatoTelefone(String nome, String numero){
        int qntContatos = this.contatos.size();

        for(int i = 0; i < qntContatos; i++){
            if(this.contatos.get(i).getNumero() == numero) {
                this.contatos.get(i).setNome(nome);
                break;
            }
        }

    }

    public void mostrarTodosContatos(){
        int qntContatos = this.contatos.size();

        for(int i = 0; i < qntContatos; i++){
            String nome = this.contatos.get(i).getNome();
            String numero = this.contatos.get(i).getNumero();
            System.out.println("Contato: " + (i+1) +
            ", Nome: " + nome +
            ", Numero: " + numero
            );
        }

    }

    public int quantidadeTotalContatos(){
        return this.contatos.size();
    }
}
