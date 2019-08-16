//ESTÁ ERRADO

int pesquisaBinaria (int vet[], int chave, int tam){
     int inf = 0;     // limite inferior (o primeiro índice de vetor em C é zero)
     int sup = tam-1; // limite superior (termina em um número a menos. 0 a 9 são 10 números)
     int meio;
     while (inf <= sup)
     {
          meio = (inf + sup)/2;
          if (chave == vet[meio])
               return meio;
          if (chave < vet[meio])
               sup = meio-1;
          else
               inf = meio+1;
     }
     return -1; //Se achou, retorna a posição, se não, a função retorna -1
}
