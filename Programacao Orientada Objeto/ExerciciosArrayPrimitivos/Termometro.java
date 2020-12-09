public class Termometro {
    private double[][] termometro;

    public Termometro(int tamanhoTermometro){
        this.termometro = new double[2][tamanhoTermometro];
        for(int i = 0 ; i < tamanhoTermometro; i++) {
            this.termometro[0][i] = 0.0;
            this.termometro[1][i] = 0.0;
        }
    }

    public Termometro(double[][] vetorTermometro){
        this.termometro = vetorTermometro;
    }


    private double[][] sortTermometro(double[][] vetorTermometro){
        int length = vetorTermometro.length;
        for(int i = 0; i < length; i++){
            for(int j = 0; j < (length-1); j++){
                if(vetorTermometro[0][j] > vetorTermometro[0][j + 1]){
                    double aux = vetorTermometro[0][j];
                    double aux2 = vetorTermometro[1][j];
                    vetorTermometro[0][j] = vetorTermometro[0][j+1];
                    vetorTermometro[1][j] = vetorTermometro[1][j+1];

                    vetorTermometro[0][j+1] = aux;
                    vetorTermometro[1][j+1] = aux2;
                }
            }
        }
        return vetorTermometro;
    }

    // AAAAAAAAAAAAA
    public double[][] adicionarTemperatura(double novaTemperatura){
        int length = this.termometro[0].length;
        for(int i = 0; i < length; i++){
            if(this.termometro[1][i] == 0.0) {
                this.termometro[0][i] = novaTemperatura;
                this.termometro[1][i] = 1.0;
                break;
            }
        }
        return this.termometro;
    }

    // BBBBBBBBBBBBBB
    public double[][] removerTemperatura(double removeTemperatura){
        int length = this.termometro[0].length;
        int aux = 0;

        for(int i = 0; i < length; i++){
            if(this.termometro[0][i] == removeTemperatura) {
                aux = i;
                for(int j = i; j < length; j++){
                    if(j+1 == length) {
                        this.termometro[0][j] = 0.0;
                        this.termometro[1][j] = 0.0;
                        break;
                    }
                    else {
                        this.termometro[0][j] = this.termometro[0][j+1];
                        this.termometro[1][j] = this.termometro[1][j+1];
                    }
                }
                break;
            }
        }
        return this.termometro;
    }

    // CCCCCCCCCCCCCCC
    public double obterMaxTemperatura(){
        int length = this.termometro[0].length;
        double max = this.termometro[0][0];
        for(int i = 0; i < length; i++){
            if(this.termometro[0][i] >= max) {
                max = this.termometro[0][i];
            }
        }
        return max;
    }

    // DDDDDDDDDDDDDD
    public double obterMinTemperatura(){
        int length = this.termometro[0].length;
        double min = this.termometro[0][0];
        for(int i = 0; i < length; i++){
            if(this.termometro[0][i] <= min) {
                min = this.termometro[0][i];
            }
        }
        return min;
    }

    // EEEEEEEEEEEEE
    public double amplitudeTermometro(){
        double min = obterMinTemperatura();
        double max = obterMaxTemperatura();

        return max - min;
    }

    // FFFFFFFFFFFFFF
    public double mediaTemperatura(){
        int length = this.termometro[0].length;
        double soma = 0.0;
        int somaAux = 0;

        for(int i = 0; i < length; i++){
            if(this.termometro[1][i] == 1.0) {
                soma += this.termometro[0][i];
                somaAux++;
            }
        }

        if(somaAux == 0) return 0;
        else return soma / somaAux;
    }

    // GGGGGGGGGGGGGGG
    public double[][] temperaturaOrdenada(double[][] vetorTermometro){
        return sortTermometro(vetorTermometro);
    }

    public void mostrarTemperatura(){
        for(int i = 0; i < this.termometro[0].length; i++){
            System.out.print(this.termometro[0][i] + " ");
        }
        System.out.println("");
        for(int i = 0; i < this.termometro[0].length; i++){
            System.out.print(this.termometro[1][i] + " ");
        }
        System.out.println("");
    }


    public double[][] getTermometro() {
        return this.termometro;
    }

    public void setTermometro(double[][] termometro) {
        this.termometro = termometro;
    }

}
