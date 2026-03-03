#include <stdio.h>

int transformarS(int minutos) {
	int segundos;
	
	segundos = minutos * 60; 
	return segundos; 
}


int main() {
	
	int minutos; 
	int resultado; 
	
	printf("Digite os minutos: \n");
	scanf("%d", &minutos);
	
	resultado = transformarS(minutos); 
	
	printf("%d segundos\n", resultado);
	
	return 0; 
}
