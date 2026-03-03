#include <stdio.h>
#include <ctype.h>


float notas(float n1, float n2, float n3, char tipo) {
    float media_ponderada; 

   
	tipo = tolower(tipo);
	if(tipo == 'a') {
		return (n1 + n2 + n3) / 3;
	}
	
	if(tolower(tipo) == 'p') {
		return media_ponderada = (n1 * 5 + n2 * 3 + n3 * 2) / (5 + 3 + 2);
	}
}

int main() {
	char tipo; 
	float n1, n2, n3; 
	
	printf("Insira o N1, N2 e o N3: \n");
	scanf("%f %f %f", &n1,&n2,&n3);
	
	printf("Insira o Tipo (P || A)\n");
    scanf(" %c", &tipo);

	float res = notas(n1, n2, n3, tipo);

	printf("%.2f\n", res);
	
	return 0; 
}
