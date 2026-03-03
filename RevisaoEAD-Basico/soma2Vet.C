#include <stdio.h>

void somaVetor(int vetA[], int vetB[], int vetC[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        vetC[i] = vetA[i] + vetB[i];
    }
}

int main()
{
    int i;
    int tam;

    printf("Preencha o tamanho: \n");
    scanf("%d", &tam);

    int vetA[tam];
    int vetB[tam];
    int vetRes[tam];

    for (i = 0; i < tam; i++)
    {
        printf("Preencha o vetor: \n");
        scanf("%d", &vetA[i]);
    }


    for(i = 0; i < tam; i++) {
        printf("Preencha o vetor B: \n");
        scanf("%d", &vetB[i]); 
    }

    somaVetor(vetA, vetB, vetRes, tam);
    for (i = 0; i < tam; i++)
        printf("%d ", vetRes[i]);

    return 0;
}