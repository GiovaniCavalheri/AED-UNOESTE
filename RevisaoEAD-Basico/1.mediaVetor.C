#include <stdio.h>

float mediaVetor(int vetInt[], int tam)
{
    int i;
    int somaPares = 0;
    int contPares = 0;

    for (i = 0; i < tam; i++)
    {
        if (vetInt[i] % 2 == 0)
        {
            somaPares += vetInt[i];
            contPares++;
        }
    }
    return somaPares / contPares;
}

int main()
{
    int tam;

    printf("Preencha o Tamanho: \n");
    scanf("%d", &tam);

    int i;
    int vetNum[tam];

    for (i = 0; i < tam; i++)
    {
        printf("Preencha o vetor: \n");
        scanf("%d", &vetNum[i]);
    }

    int res = mediaVetor(vetNum, tam);
    printf("%d", res);

    return 0;
}