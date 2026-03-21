#include <stdio.h>
#define TAM 5

int topo, pilha[TAM];

void calcMedia(int pilha[])
{
    int soma = 0; 
    int cont = 0;
    for (int i = topo; i >= 0; i--)
    {
        soma += pilha[i];
    }

    float media = (float)soma / (topo + 1);
    for (int i = 0; i <= topo; i++)
    {
        if (pilha[i] > media)
            cont++;
    }
    
    printf("Media %.2f\n\n", media); 
    printf("Numeros acima dela :%d", cont); 
}

int main() {

    topo = -1;
    for (int i = 0; i < TAM; i++)
    {
        printf("Digite um numero: \n");
        scanf("%d", &pilha[i]);
        topo++;
    }

    calcMedia(pilha); 

    return 0;
}