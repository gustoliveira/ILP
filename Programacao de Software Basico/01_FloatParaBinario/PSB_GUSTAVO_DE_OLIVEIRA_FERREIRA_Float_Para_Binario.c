#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bin_to_dec(int vetor[]){
	double index = 0;
	for(int j = 0; j < 16; j++){
		index += vetor[j] * (1 / (pow(2, j + 1)));
	}
	printf("Reconvertido em decimal: %f\n", index);
}

int main(){
	float num, aux;
	int vetor[16];

	scanf("%f", &num);

	for (int j = 0; j < 16; j++){
		vetor[j] = 0;
	}

	int i = 0;
	for ( ; ; i++){
		if (num * 2 == 1.0){
			num = num * 2;
			vetor[i] = 1;
		}
		else if (num * 2 > 1.0){
			num = num * 2;
			num = num - 1;
			vetor[i] = 1;
		}
		else if (num * 2 < 1.0){
			num = num * 2;
			vetor[i] = 0;
		}
		if (num == 1 || i == 16) break;
	}

	printf("0.");
	for (int j = 0; j < i+1; j++){
		printf("%d", vetor[j]);
	}
	printf("\n");

	// bin_to_dec(vetor);

	return 0;
}
