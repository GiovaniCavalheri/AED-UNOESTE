#include <stdio.h>
#define TAM 4

int topo, pilha[TAM];

void verificaSaida(int pilha[], int num)
{
    int i, cont = 0; 

    for (i = topo; i >= 0; i--) {
        if(num == pilha[i]) {
            printf("%d numero(s) precisam sair antes do %d\n", cont, num);
        }
        cont++;
    }
    printf("Numero %d nao esta na pilha\n", num);
}
int main()
{
    int num;
    topo = -1;
    for (int i = 0; i < TAM; i++)
    {
        printf("Digite um numero: \n");
        scanf("%d", &pilha[i]);
        topo++;
    }

    printf("Numero que deseja verificar: "); 
    scanf("%d",&num);

    verificaSaida(pilha, num);

    return 0;
}