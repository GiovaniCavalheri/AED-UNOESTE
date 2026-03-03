#include <stdio.h>

void desenha_linha(int quant) {
	int i; 
	for(i = 0; i < quant; i ++) {
		printf("=");
	}
}

int main() {
	int quant; 
	printf("Insira a quantidade:\n");
	scanf("%d", &quant); 

	desenha_linha(quant);
	
	return 0; 
}
