#include <stdio.h>
#define TAM 5

int topo, pilha[TAM];

void verificaCrescente(int pilha[])
{
    int i;
    int crescente = 1; 

    for (i = 0; i < topo; i++)
    {
        if (pilha[i] > pilha[i + 1]) {
            crescente = 0;
        }
    }
    if (crescente == 1) {
        printf("A pilha esta em ordem crescente!\n");
    }
        
    else {
        printf("A pilha NAO esta em ordem crescente!\n");
    }

}
int main()
{

    topo = -1;
    for (int i = 0; i < TAM; i++)
    {
        printf("Digite um numero: \n");
        scanf("%d", &pilha[i]);
        topo++;
    }

    verificaCrescente(pilha); 

    return 0;
}