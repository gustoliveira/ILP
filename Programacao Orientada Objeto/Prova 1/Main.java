// Estou mandando atrasado pois minha internet caiu, e aí perdi um certo tentando fazer ela voltar
// e não foi possível terminar no tempo correto, a que mandei na versão final tem alguns erros e estou ciente
// não os fiz pq realmente não tive tempo (inclusive não mandei a versão parcial por este motivo, não tinha internet)
// mas mesmo após terminar continue testando pra poder consertar e aqui está a versão final

class Main {
  public static void main(String[] args) {
      Prato teste = new Prato("Salada",  10.0, EnumTipoPrato.PRINCIPAL);
      Prato teste2 = new Prato("Arros",  50.0, EnumTipoPrato.PRINCIPAL);

        Cliente cliente = new Cliente("Gustavo", "50500", 5);

        cliente.adicionarPrato(teste, 29);
        cliente.adicionarPrato(teste2);
        cliente.adicionarPrato(teste2);

        cliente.showConta();

  }
}