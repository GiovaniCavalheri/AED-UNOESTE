#include <stdio.h>

void alteraV(int *n, int *n2) {
	if(*n > *n2) {
		int aux = *n;
		*n = *n2; 
		*n2 = aux;
	}
}


int main() {
	int n, n2; 
	printf("Insira o Prim. Valor\n");
	scanf("%d", &n);
	
	printf("Insira o Prim. Valor\n");
	scanf("%d", &n2);
	

	alteraV(&n , &n2);
	printf("Resultado: %d %d\n",n, n2);
	
	return 0; 
}
