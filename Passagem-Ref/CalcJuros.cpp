#include <stdio.h>

float calcjuros(float *saldo, float taxa) {
	float juros; 
	juros = (*saldo * taxa)/100; 
	*saldo = *saldo + juros; 
	return juros; 
}

int main() {
	float saldo, taxa, resul; 
	
	printf("Informe o saldo: \n");
	scanf("%f", &saldo);
	
	printf("Informe a taxa: \n");
	scanf("%f", &taxa);
	
	resul = calcjuros(&saldo,taxa);
	printf("Juros: %.2f\n", resul);
	printf("Saldo atualizado: %.2f\n", saldo);
		
	return 0;
}
