#include <stdio.h>
#define T 2

typedef struct 
{
    char codigo[11]; 
    char nome[40];
    float preco; 
}Produto;

void preencherDados(Produto P[]) {
    int i; 

    for(i = 0; i < T; i++) {
        printf("Digite o Codigo do Produto: \n"); fflush(stdin);
        gets(P[i].codigo); fflush(stdin);
        printf("Digite o nome do Produto: \n"); fflush(stdin);
        gets(P[i].nome); 
        printf("Digite o Preco do Produto: \n");
        scanf("%f", &P[i].preco);   
    }
}

float valorTotal(Produto P[]) {
    int i; 
    float soma; 
    for(i = 0; i < T; i++) {
        soma += P[i].preco;
    }
    return soma; 
}


int main() {
    Produto P[T]; 
    preencherDados(P); 

    float resp = valorTotal(P); 
    printf("Inventario Total dos Produtos: [%.2f]\n", resp);
    return 0; 
}