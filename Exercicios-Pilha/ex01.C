#include <stdio.h>
#define TAM 10

int topo, pilha[TAM];

int contaNum(int num)
{
    int cont = 0;
    for (int i = 0; i <= topo; i++) {
        if (pilha[i] == num)
            cont++;
    }
    return cont; 
}

int main()
{
    int valor;

    topo = -1;
    for (int i = 0; i < TAM; i++)
    {
        printf("Digite um numero: \n");
        scanf("%d", &pilha[i]);
        topo++;
    }

    printf("\nInforme o numero a buscar: ");
    scanf("%d", &valor);
    printf("\nO numero %d aparece %d vez(es)\n", valor, contaNum(valor));

    return 0;
}