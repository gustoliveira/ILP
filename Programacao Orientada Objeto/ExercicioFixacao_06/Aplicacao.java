import java.util.Scanner;
import java.util.ArrayList;

public class Aplicacao {
    public static int possuiAtendente(ArrayList<Atendente> listaAtendentes, String curso){
        int length = listaAtendentes.size();
        for(int i = 0; i < length; i++){
            if(listaAtendentes.get(i).getCurso().equals(curso)) {
                return i;
            }
        }
        return -1;
    }


    public static void main(String args []) {
        ArrayList<Atendente> listaAtendentes = new ArrayList<Atendente>();
        ArrayList<Aluno> listaAlunos = new ArrayList<Aluno>();

        while(true) {
            System.out.println(
                "1. Cadastrar Atendente\n" +
                "2. Matricular Aluno\n" +
                "3. Listar Alunos Matriculados\n" +
                "4. Continuar (S/N)\n"
            );

            Scanner opcaoSC = new Scanner(System.in);
            Scanner cursoSC = new Scanner(System.in);
            Scanner nomeSC = new Scanner(System.in);
            Scanner continuarSC = new Scanner(System.in);

            int opcao = opcaoSC.nextInt();

            if(opcao == 1){
                System.out.print("Digite o curso do atendente: ");
                String curso = cursoSC.next();

                if(possuiAtendente(listaAtendentes, curso) == -1){
                    Atendente atendente = new Atendente(curso);
                    listaAtendentes.add(atendente);
                    System.out.println("Foi criado o atendente para o curso " + curso + "\n");
                }
                else {
                    System.out.println("O atendente deste curso já está disponível" + "\n");
                }

            }
            else if(opcao == 2) {
                System.out.print("Digite o nome do curso: ");
                String curso = cursoSC.nextLine();

                System.out.print("Digite o nome do aluno: ");
                String nome = nomeSC.nextLine();

                int isAtendente = possuiAtendente(listaAtendentes, curso);

                if(isAtendente == -1) {
                    System.out.println("Aguarde seu atendente chegar");
                }
                else {
                    Aluno aluno = listaAtendentes.get(isAtendente).matricula(nome);
                    listaAlunos.add(aluno);
                }
            }
            else if(opcao == 3) {
                int lenght = listaAlunos.size();
                for(int i = 0; i < lenght; i++){
                    listaAlunos.get(i).mostrarAluno();
                }
            }
            else if(opcao == 4){
                String continuar = continuarSC.next();

                if(continuar.equals("S")) continue;
                else if(continuar.equals("N")) break;
                else System.out.println("Digite uma opção válida");
            }
            else {
                System.out.println("Digite uma opção válida");
            }

        }
    }
}
