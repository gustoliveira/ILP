// Gustavo de Oliveira Ferreira

import java.util.Scanner;
import java.util.ArrayList;

public class Aplicacao {
    public static void main(String[] args){
        ArrayList<Assinante> listaAssinantesTotais = new ArrayList<Assinante>();
        ArrayList<Anuncio> listaAnunciosTotais = new ArrayList<Anuncio>();

        ArrayList<AnuncioTroca> listaAnunciosTrocaTotais = new ArrayList<AnuncioTroca>();
        ArrayList<AnuncioVenda> listaAnunciosVendaTotais = new ArrayList<AnuncioVenda>();

        while(true){
            // Todos os scanners utilizados para ler as entradas
            Scanner opcaoSC = new Scanner(System.in);
            Scanner cpfSC = new Scanner(System.in);
            Scanner nomeSC = new Scanner(System.in);
            Scanner enderecoSC = new Scanner(System.in);
            Scanner telefoneSC = new Scanner(System.in);
            Scanner consultaSC = new Scanner(System.in);
            Scanner tituloSC = new Scanner(System.in);
            Scanner isAtivoSC = new Scanner(System.in);
            Scanner isTrocaSC = new Scanner(System.in);
            Scanner qntdLivroSC = new Scanner(System.in);
            Scanner qntdLivroDesejadosSC = new Scanner(System.in);
            Scanner precoSC = new Scanner(System.in);
            Scanner nomeLivroSC = new Scanner(System.in);
            Scanner isbnSC = new Scanner(System.in);
            Scanner materiaSC = new Scanner(System.in);
            Scanner edicaoSC = new Scanner(System.in);
            Scanner anoSC = new Scanner(System.in);
            Scanner anoPublicacaoSC = new Scanner(System.in);
            Scanner tituloAnuncioSC = new Scanner(System.in);
            Scanner nomeAnuncianteSC = new Scanner(System.in);

            // Menu de opções
            System.out.println(
                "\n" +
                "1. Adicionar Assinante\n" +
                "2. Remover Assinante\n" +
                "3. Adicionar Anuncio\n" +
                "4. Remover Anuncio\n" +
                "5. Mostrar Todos Anuncios de um Anunciante\n" +
                "6. Mostrar Todos Anuncios\n" +
                "7. Consultar livro dentro dos os anuncios\n" +
                "8. Mostrar informações de um anunciante\n" +
                "9. Fechar aplicação\n"
            );
            int opcao = opcaoSC.nextInt();

            // Cadastrar um assinante
            // Recolhe todas as informações necessárias para se instanciar
            // E depois adiciona na lista de todos os assinantes
            if(opcao == 1){
                System.out.println("Para cadastrar um assinante digite as seguintes informações: ");

                System.out.print("CPF: ");
                String cpf = cpfSC.next();

                System.out.print("Nome: ");
                String nome = nomeSC.nextLine();

                System.out.print("Endereço: ");
                String endereco = enderecoSC.nextLine();

                System.out.print("Telefone: ");
                String telefone = telefoneSC.nextLine();

                Assinante assinante = new Assinante(cpf, nome, endereco, telefone);
                listaAssinantesTotais.add(assinante);
            }
            // Remover um assinante
            // Remove o assinante com base na lista de todos os assinantes atráves do nome
            else if(opcao == 2){
                System.out.print("Para remover um assinante digite o nome dele: ");
                String nome = nomeSC.nextLine();
                for(int i = 0; i < listaAssinantesTotais.size(); i++){
                    if(listaAssinantesTotais.get(i).getNome().equals(nome)) {
                        listaAssinantesTotais.remove(i);
                        break;
                    }
                }
            }
            // Adiciona um anuncio
            // Le para qual assinante irá ser anunciado e recolhe todas as informações para se instanciar um anuncio novo
            // Incluindo a lista de livros
            // Adiciona o anuncio na lista de todos os anuncios, além de adicionar na lista de anuncios do assinante dado
            else if(opcao == 3){

                float preco = 0;
                boolean booleanIsAtivo = true;


                System.out.print("Nome do anunciante que irá ter este novo anuncio: ");
                String nome = nomeSC.nextLine();

                System.out.println("Para adicionar um anuncio digite as seguintes informações: ");

                System.out.print("Titulo do anuncio: ");
                String tituloAnuncio = tituloSC.nextLine();

                System.out.print("Está ativo (S/N): ");
                String isAtivo = isAtivoSC.next();
                if(isAtivo.equals("N")) {
                    booleanIsAtivo = false;
                }

                AnuncioVenda anuncioVenda = new AnuncioVenda(tituloAnuncio, booleanIsAtivo);
                AnuncioTroca anuncioTroca = new AnuncioTroca(tituloAnuncio, booleanIsAtivo);

                System.out.print("É para troca (S/N): ");
                String isTroca = isTrocaSC.next();

                if(isTroca.equals("N")) { // VENDA
                    System.out.print("Digite o valor do anuncio: (FLOAT)  ");
                    preco = precoSC.nextFloat();

                    System.out.print("Quantos livros irá possuir? (Digite um inteiro) ");
                    int qntdLivro = qntdLivroSC.nextInt();

                    for(int i = 0; i < qntdLivro; i++) {
                        System.out.print("Nome do livro: ");
                        String nomeLivro = nomeLivroSC.nextLine();

                        System.out.print("ISBN: ");
                        String isbn = isbnSC.next();

                        System.out.println(
                            "Para materia do livro, selecione uma das materias a baixo: \n" +
                            "1. PORTUGUES\n" +
                            "2. MATEMATICA\n" +
                            "3. CIENCIAS\n" +
                            "4. HISTORIA\n" +
                            "5. GEOGRAFIA\n" +
                            "6. INGLES\n" +
                            "7. ESPANHOL\n"
                        );
                        int materia = materiaSC.nextInt();
                        MateriaEnum materiaEnum = MateriaEnum.PORTUGUES;
                        if(materia == 1) materiaEnum = MateriaEnum.PORTUGUES;
                        else if(materia == 2) materiaEnum = MateriaEnum.MATEMATICA;
                        else if(materia == 3) materiaEnum = MateriaEnum.CIENCIAS;
                        else if(materia == 4) materiaEnum = MateriaEnum.HISTORIA;
                        else if(materia == 5) materiaEnum = MateriaEnum.GEOGRAFIA;
                        else if(materia == 6) materiaEnum = MateriaEnum.INGLES;
                        else if(materia == 7) materiaEnum = MateriaEnum.ESPANHOL;

                        System.out.print("Edicao: ");
                        String edicao = edicaoSC.nextLine();

                        System.out.print("Ano: ");
                        int ano = anoSC.nextInt();

                        System.out.print("Ano da Publicação: ");
                        int anoPublicacao = anoPublicacaoSC.nextInt();

                        Livro newLivro = new Livro(nomeLivro, isbn, materiaEnum, edicao, ano, anoPublicacao);
                        anuncioVenda.adicionarLivro(newLivro);
                    }
                    anuncioVenda.setPreco(preco);

                    for(int i = 0; i < listaAssinantesTotais.size(); i++){
                        if(listaAssinantesTotais.get(i).getNome().equals(nome)) {
                            listaAssinantesTotais.get(i).adicionarAnuncio(anuncioVenda, listaAssinantesTotais.get(i));
                        }
                    }
                    listaAnunciosTotais.add(anuncioVenda);

                }
                else { // TROCA
                    System.out.print("Quantos livros irá possuir? (Digite um inteiro) ");
                    int qntdLivro = qntdLivroSC.nextInt();


                    for(int i = 0; i < qntdLivro; i++) {
                        System.out.print("Nome do livro: ");
                        String nomeLivro = nomeLivroSC.nextLine();

                        System.out.print("ISBN: ");
                        String isbn = isbnSC.next();

                        System.out.println(
                            "Para materia do livro, selecione uma das materias a baixo: \n" +
                            "1. PORTUGUES\n" +
                            "2. MATEMATICA\n" +
                            "3. CIENCIAS\n" +
                            "4. HISTORIA\n" +
                            "5. GEOGRAFIA\n" +
                            "6. INGLES\n" +
                            "7. ESPANHOL\n"
                        );
                        int materia = materiaSC.nextInt();
                        MateriaEnum materiaEnum = MateriaEnum.PORTUGUES;
                        if(materia == 1) materiaEnum = MateriaEnum.PORTUGUES;
                        else if(materia == 2) materiaEnum = MateriaEnum.MATEMATICA;
                        else if(materia == 3) materiaEnum = MateriaEnum.CIENCIAS;
                        else if(materia == 4) materiaEnum = MateriaEnum.HISTORIA;
                        else if(materia == 5) materiaEnum = MateriaEnum.GEOGRAFIA;
                        else if(materia == 6) materiaEnum = MateriaEnum.INGLES;
                        else if(materia == 7) materiaEnum = MateriaEnum.ESPANHOL;

                        System.out.print("Edicao: ");
                        String edicao = edicaoSC.nextLine();

                        System.out.print("Ano: ");
                        int ano = anoSC.nextInt();

                        System.out.print("Ano da Publicação: ");
                        int anoPublicacao = anoPublicacaoSC.nextInt();

                        anuncioTroca.adicionarLivro(new Livro(nomeLivro, isbn, materiaEnum, edicao, ano, anoPublicacao));

                    }

                    // LISTA DE LIVROS DESEJADOS
                    ArrayList<Livro> listaLivroDesejados = new ArrayList<Livro>();

                    System.out.println("Digite a quantidade de livros desejados para troca no anuncio: (INTEIRO) ");
                    int qntdLivroDesejados = qntdLivroDesejadosSC.nextInt();

                    for(int i = 0; i < qntdLivroDesejados; i++) {
                        System.out.print("Nome do livro: ");
                        String nomeLivro = nomeLivroSC.nextLine();

                        System.out.print("ISBN: ");
                        String isbn = isbnSC.next();

                        System.out.println(
                            "Para materia do livro, selecione uma das materias a baixo: \n" +
                            "1. PORTUGUES\n" +
                            "2. MATEMATICA\n" +
                            "3. CIENCIAS\n" +
                            "4. HISTORIA\n" +
                            "5. GEOGRAFIA\n" +
                            "6. INGLES\n" +
                            "7. ESPANHOL\n"
                        );
                        int materia = materiaSC.nextInt();
                        MateriaEnum materiaEnum = MateriaEnum.PORTUGUES;
                        if(materia == 1) materiaEnum = MateriaEnum.PORTUGUES;
                        else if(materia == 2) materiaEnum = MateriaEnum.MATEMATICA;
                        else if(materia == 3) materiaEnum = MateriaEnum.CIENCIAS;
                        else if(materia == 4) materiaEnum = MateriaEnum.HISTORIA;
                        else if(materia == 5) materiaEnum = MateriaEnum.GEOGRAFIA;
                        else if(materia == 6) materiaEnum = MateriaEnum.INGLES;
                        else if(materia == 7) materiaEnum = MateriaEnum.ESPANHOL;

                        System.out.print("Edicao: ");
                        String edicao = edicaoSC.nextLine();

                        System.out.print("Ano: ");
                        int ano = anoSC.nextInt();

                        System.out.print("Ano da Publicação: ");
                        int anoPublicacao = anoPublicacaoSC.nextInt();

                        Livro newLivro = new Livro(nomeLivro, isbn, materiaEnum, edicao, ano, anoPublicacao);
                        listaLivroDesejados.add(newLivro);
                    }
                    anuncioTroca.setLivrosDesejados(listaLivroDesejados);

                    for(int i = 0; i < listaAssinantesTotais.size(); i++){
                        if(listaAssinantesTotais.get(i).getNome().equals(nome)) {
                            listaAssinantesTotais.get(i).adicionarAnuncio(anuncioTroca, listaAssinantesTotais.get(i));
                        }
                    }
                    listaAnunciosTotais.add(anuncioTroca);
                }
            }
            // Remove um anuncio
            // Remove anuncio de um certo assinante com base no titulo
            // Remove também da lista de todos os anuncios
            else if(opcao == 4){

                System.out.print("Digite o nome do anunciante: ");
                String nomeAnunciante = nomeAnuncianteSC.nextLine();

                System.out.print("Digite o nome do anuncio: ");
                String tituloAnuncioRemover = tituloAnuncioSC.nextLine();

                for(int i = 0; i < listaAssinantesTotais.size(); i++){
                    if(listaAssinantesTotais.get(i).getNome().equals(nomeAnunciante)) {
                        listaAssinantesTotais.get(i).removerAnuncio(tituloAnuncioRemover);
                        for(int j = 0; j < listaAnunciosTotais.size(); j++){
                            if(listaAnunciosTotais.get(j).getTituloAnuncio().equals(tituloAnuncioRemover)) {
                                listaAnunciosTotais.remove(j);
                            }
                        }
                    }
                }
            }
            // Mostra todos os anuncios de um assinante
            else if(opcao == 5){
                    System.out.print("Digite o nome do anunciante: ");
                    String nomeAnunciante = nomeAnuncianteSC.nextLine();

                    for(int i = 0; i < listaAssinantesTotais.size(); i++){
                        if(listaAssinantesTotais.get(i).getNome().equals(nomeAnunciante)) {
                            ArrayList<AnuncioTroca> auxAnuncios = listaAssinantesTotais.get(i).getAnunciosAssinanteTroca();
                            for(int j = 0; j < auxAnuncios.size(); j++) {
                                System.out.println(auxAnuncios.get(j).showAnuncio());
                            }
                            ArrayList<AnuncioVenda> auxAnunciosVenda = listaAssinantesTotais.get(i).getAnunciosAssinanteVenda();
                            for(int j = 0; j < auxAnunciosVenda.size(); j++) {
                                System.out.println(auxAnunciosVenda.get(j).showAnuncio());
                            }
                            break;
                        }
                    }
                }
            // Mostra todos os anuncios
            else if(opcao == 6){
                for(int i = 0; i < listaAnunciosTotais.size(); i++){
                    System.out.println(listaAnunciosTotais.get(i).showAnuncio());
                }
            }
            // Consulta um livro atráves do nome na lista de todos os anuncios
            else if(opcao == 7){
                System.out.print("Digite o nome do livro a ser consultado: ");
                String nomeLivro = nomeLivroSC.nextLine();
                for(int i = 0; i < listaAnunciosTotais.size(); i++) {
                    ArrayList<Livro> listaLivro = listaAnunciosTotais.get(i).getListaLivros();
                    for(int j = 0; j < listaLivro.size(); j++){
                        if(listaLivro.get(j).getTitulo().equals(nomeLivro)) {
                            System.out.println(listaLivro.get(j).consultaLivro(nomeLivro));
                        }
                    }
                }
            }
            // Mostra todas as informações de um assinante com base em seu nome
            else if(opcao == 8){
                System.out.print("Digite o nome do anunciante: ");
                String nomeAnunciante = nomeAnuncianteSC.nextLine();
                for(int i = 0; i < listaAssinantesTotais.size(); i++) {
                    if(listaAssinantesTotais.get(i).getNome().equals(nomeAnunciante)) {
                        System.out.println(listaAssinantesTotais.get(i).consultaAssinante(nomeAnunciante));
                    }
                }
            }
            else {
                break;
            }
        }

    }
}

