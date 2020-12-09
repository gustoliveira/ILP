import java.util.ArrayList;

public class Usuario {
    private String nome;
    private boolean isVIP;
    private ArrayList<Object> listaCompras = new ArrayList<Object>();

    public Usuario(String nome, boolean isVIP) {
        this.nome = nome;
        this.isVIP = isVIP;
    }

    public void comprarObra(Livro livro, int quantidade){
        for(int i = 0; i < quantidade; i++){
            listaCompras.add(livro);
        }
    }

    public void comprarObra(Revista livro, int quantidade){
        for(int i = 0; i < quantidade; i++){
            listaCompras.add(livro);
        }
    }

    public void comprarObra(LivroDidatico livro, int quantidade){
        for(int i = 0; i < quantidade; i++){
            listaCompras.add(livro);
        }
    }

    public String getNome() {
        return this.nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public boolean isIsVIP() {
        return this.isVIP;
    }

    public boolean getIsVIP() {
        return this.isVIP;
    }

    public void setIsVIP(boolean isVIP) {
        this.isVIP = isVIP;
    }

}
