#include <stdio.h>
#include <stdlib.h>

int main(){
	float num, aux;
	int vetor[16];

	scanf("%f", &num);
	
	for(int j = 0; j < 16; j++){
		vetor[j] = 0;
	}


	int i;
	for(i = 0; ; i++){

		if(num*2 == 1.0){
			num = num * 2;
			aux = 1;
			vetor[i] = 1;
		}
		else if(num*2 > 1.0){
			num = num * 2;
			num = num - 1;
			aux = 1;
			vetor[i] = 1;
		}
		else if(num*2 < 1.0){
			num = num * 2;
			aux = 0;
			vetor[i] = 0;
		}
		if(num == 1) break;
	}

	printf("0.");
	for(int j = 0; j < i+1; j++){
		printf("%d", vetor[j]);
	}
	printf("\n");

	return 0;
}
