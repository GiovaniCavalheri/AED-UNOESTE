#include <stdio.h>

void alteraVal(int *n) {
	*n = *n * 2; 
}

void alteraMet(int *n) { 
	*n = *n / 2;
}


int main() {
	int n, aux; 
	printf("Insira o valor: \n");
	scanf("%d", &n);
	
	
	aux = n; 
	
	alteraVal(&n);
	printf("Resultado: %d\n", n);
	
	alteraMet(&aux);
	printf("Resultado: %d\n", aux);
	

	
	return 0;
}
