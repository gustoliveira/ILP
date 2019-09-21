int buscaBinaria(int vet[], int n, int chave) {
     int posIni = 0, posFim = n - 1, posMeio;
     while (posIni <= posFim) {
          posMeio = (posIni + posFim)/2;
          if (vet[posMeio] == chave) return posMeio;
          else if (vet[posMeio] > chave) posFim = posMeio - 1;
          else if (vet[posMeio] < chave) posIni = posMeio + 1;
     }
     return -1;
}