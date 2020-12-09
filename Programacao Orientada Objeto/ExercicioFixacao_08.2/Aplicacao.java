import java.util.Scanner;
import java.util.ArrayList;

public class Aplicacao{
    private static ArrayList<CursoGraduacao> listaCursosGraduacao = new ArrayList<CursoGraduacao>();
    private static ArrayList<CursoPosGraduacao> listaCursosPosGraduacao = new ArrayList<CursoPosGraduacao>();

    public static void criarCursoGraduacao(){
        Scanner var = new Scanner(System.in);
        System.out.println("ID do curso: ");
        String id = var.nextLine();

        System.out.println("Nome do curso: ");
        String nome = var.nextLine();

        System.out.println("Area: ");
        String area = var.nextLine();

        System.out.println("Quantidade de vagas: ");
        int qtdVagas = var.nextInt();

        System.out.println("Quantidade de disciplinas obrigatorias: ");
        int qtdDisciplinasObrigatorias = var.nextInt();

        System.out.println("Quantidade de disciplinas optativas: ");
        int qtdDisciplinasOptativas = var.nextInt();

        CursoGraduacao criada = new CursoGraduacao(id, nome, area, qtdVagas, qtdDisciplinasObrigatorias, qtdDisciplinasOptativas);
        listaCursosGraduacao.add(criada);
    }

    public static void criarCursoPosGraduacao(){
        Scanner var = new Scanner(System.in);
        System.out.println("ID do curso: ");
        String id = var.nextLine();

        System.out.println("Nome do curso: ");
        String nome = var.nextLine();

        System.out.println("Area: ");
        String area = var.nextLine();

        System.out.println("Quantidade de vagas: ");
        int qtdVagas = var.nextInt();

        System.out.println("Carga horaria maxima: ");
        int cargaHorariaMax = var.nextInt();

        CursoPosGraduacao criada = new CursoPosGraduacao(id, nome, area, qtdVagas, cargaHorariaMax);
        listaCursosPosGraduacao.add(criada);
    }

    public static boolean consultarInformacoesCurso(){
        Scanner var = new Scanner(System.in);

        System.out.println("ID do curso: ");
        String id = var.nextLine();

        for(CursoGraduacao aux : listaCursosGraduacao){
            if(aux.getId().equals(id)){
                System.out.println(aux.consultaCurso() + "\n");
                return true;
            }
        }

        for(CursoPosGraduacao aux : listaCursosPosGraduacao){
            if(aux.getId().equals(id)){
                System.out.println(aux.consultaCurso() + "\n");
                return true;
            }
        }

        return false;
    }

    public static boolean consultarPrecoCurso(){
        Scanner var = new Scanner(System.in);

        System.out.println("ID do curso: ");
        String id = var.nextLine();

        System.out.println("Possui convenio? (S/N): ");
        String convenio = var.nextLine();

        if(convenio.equals("N") || convenio.equals("n")){
            for(CursoGraduacao aux : listaCursosGraduacao){
                if(aux.getId().equals(id)){
                    System.out.println("Valor cheio: " + aux.getTaxaMatricula() + "\n");
                    System.out.println("Valor com desconto: " + aux.getTaxaMatricula()*90/100 + "\n");
                    return true;
                }
            }

            for(CursoPosGraduacao aux : listaCursosPosGraduacao){
                if(aux.getId().equals(id)){
                    System.out.println("Valor cheio: " + aux.getTaxaMatricula() + "\n");
                    System.out.println("Valor com desconto: " + aux.getTaxaMatricula()*95/100 + "\n");
                    return true;
                }
            }
        }
        else{
            for(CursoGraduacao aux : listaCursosGraduacao){
                if(aux.getId().equals(id)){
                    System.out.println("Valor com desconto do convenio: " + aux.getTaxaMatricula()*95/100 + "\n");
                    System.out.println("Valor com desconto do conveio e pre-matricula: " + aux.getTaxaMatricula()*90/100*95/100 + "\n");
                    return true;
                }
            }

            for(CursoPosGraduacao aux : listaCursosPosGraduacao){
                if(aux.getId().equals(id)){
                    System.out.println("Valor com desconto do convenio: " + aux.getTaxaMatricula()*94/100 + "\n");
                    System.out.println("Valor com desconto do convenio e pre-matricula: " + aux.getTaxaMatricula()*95/100*94/100 + "\n");
                    return true;
                }
            }
        }

        return false;
    }

    public static void main(){
        int opcao = 0;
        Scanner opcaoSC = new Scanner(System.in);

        do{
            System.out.println(
                "1. Criar curso de graduacao \n" +
                "2. Criar curso de Pós Graduacao \n" +
                "3. Consultar informações sobre um curso \n" +
                "4. Consultar preço de um curso \n" +
                "5. Sair"
            );

            opcao = opcaoSC.nextInt();

            switch(opcao){
                case 1:
                    Aplicacao.criarCursoGraduacao();
                    break;
                case 2:
                    Aplicacao.criarCursoPosGraduacao();
                    break;
                case 3:
                    Aplicacao.consultarInformacoesCurso();
                    break;
                case 4:
                    Aplicacao.consultarPrecoCurso();
                    break;
            }
        } while(opcao != 5);
    }
}