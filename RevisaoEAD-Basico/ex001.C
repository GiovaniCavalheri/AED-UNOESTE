#include <stdio.h>
#define TL 8
int main()
{

    int vetInt[TL];
    int i, maiorN = 0, menorN = 99999, soma = 0; 
    float media; 

    for(i = 0; i < TL; i++) {
        printf("Entre com o numero: \n"); 
        scanf("%d", &vetInt[i]); 

        if(vetInt[i] > maiorN) {
            maiorN = vetInt[i]; 
        }

        if(vetInt[i] < menorN) {
            menorN = vetInt[i];
        }

        soma += vetInt[i];
    }
    media = (float)soma / TL;

    printf("Maior Numero: %d\n", maiorN); 
    printf("Menor numero: %d", menorN);
    printf("Media: %.2f\n", media);


    return 0;
}