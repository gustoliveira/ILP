public class Main {
    public static void main(String[] args) {
        Agenda agenda = new Agenda("Gustavo", "Rua Graciele Ruediger");

        agenda.adicionarContato("Primeiro", "111");
        agenda.adicionarContato("Segundo", "222");
        agenda.adicionarContato("Terceiro", "333");
        agenda.adicionarContato("Quarto", "444");
        agenda.adicionarContato("Quinto", "555");
        agenda.adicionarContato("Sexto", "666");


        // agenda.removerContatoTelefone("666");
        // agenda.removerContatoNome("Primeiro");

        agenda.alterarNomeContatoTelefone("Vigésimo", "666");

        agenda.mostrarTodosContatos();
    }
}
