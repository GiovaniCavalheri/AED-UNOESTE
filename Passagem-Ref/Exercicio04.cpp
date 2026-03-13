#include <stdio.h>


void mediaArit(int *n , int *n2) {
	int aux = *n;
	*n += *n2 /2;
	*n2 += aux /2; 
}

int main() {
	int n, n2; 
	printf("Insira o Prim. Valor\n");
	scanf("%d", &n);
	
	printf("Insira o Prim. Valor\n");
	scanf("%d", &n2);
	
	mediaArit(&n, &n2); 
	
	printf("Media 1 = %d Media 2 = %d", n, n2);
}
