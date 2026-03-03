#include <stdio.h>

int contaNegativo(int vet[], int tam)
{
    int i = 0;
    int contNeg = 0;

    for (i = 0; i < tam; i++)
    {
        if (vet[i] < 0)
        {
            contNeg++;
        }
    }
    return contNeg;
}

int main()
{
    int tam, i;

    printf("Defina o tamanho: \n");
    scanf("%d", &tam);

    int vetNum[tam];
    for (i = 0; i < tam; i++)
    {
        printf("Preencha o vetor: \n");
        scanf("%d", &vetNum[i]);
    }

    int res = contaNegativo(vetNum, tam); 
    printf("%d", res);

    return 0;
}