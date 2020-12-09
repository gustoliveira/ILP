import java.util.ArrayList;

public class Livraria {
    private String nome;

    public Livraria(String nome){
        this.nome = nome;
    }

    public void emitirNotaFiscal(ArrayList<Object> listaCompras, Usuario usuario){
        float valor = 0;
        boolean isVIP = usuario.getIsVIP();
        for(int i = 0; i < listaCompras.size(); i++){
            if(isVIP) {
                if(listaCompras.get(i) instanceof Livro) valor += (listaCompras.get(i).getPreco() * 0.97);
                else if(listaCompras.get(i) instanceof Revista) valor += (listaCompras.get(i).getPreco() * 0.92);
                else if(listaCompras.get(i) instanceof LivroDidativo) valor += (listaCompras.get(i).getPreco() * 0.90);
                else System.out.println("Tipo não identificado de obra, cadastre um tipo válido");
            }
            else {
                if(listaCompras.get(i) instanceof Livro) valor += listaCompras.get(i).getPreco();
                else if(listaCompras.get(i) instanceof Revista) valor += listaCompras.get(i).getPreco();
                else if(listaCompras.get(i) instanceof LivroDidativo) valor += listaCompras.get(i).getPreco();
                else System.out.println("Tipo não identificado de obra, cadastre um tipo válido");
            }
        }

        ArrayList<String> nomesLivros = new ArrayList<String>();
        String auxString = "\nObras compradas: \n";
        for(int i = 0; i < listaCompras.size(); i++){
            if(!(nomesLivros.contains(listaCompras.get(i).getNome()))) {
                nomesLivros.add(listaCompras.get(i).getNome());
                auxString = auxString + "   " + listaCompras.get(i).getNome() + "\n";
            }
        }


        System.out.prinln("Nome da livraria: " + this.nome + "\n" + auxString + "Total a pagar: " + valor);
    }

    public String getNome() {
        return this.nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

}
