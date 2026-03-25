#include <stdio.h> 
#include <string.h>
#define T 3
typedef struct {
    char plataforma[30];
    char nome[50];
    char gerero[30];
    char atorPrincipal[50];
    int duracao;
} Series;

Series catalogo[T];
int total = 0; 

void cadastrarSerie() {
    printf("Nome da plataforma: \n"); fflush(stdin);
    gets(catalogo[total].plataforma); 
    printf("Digite o Nome: \n"); fflush(stdin);
    gets(catalogo[total].nome);
    printf("Digite o genero: \n"); fflush(stdin);
    gets(catalogo[total].gerero);
    printf("Ator Principal: \n"); fflush(stdin);
    gets(catalogo[total].atorPrincipal);
    printf("Duracao: \n");
    scanf("%d", &catalogo[total].duracao);
    total++; 
}

void listarSeries() {
    int i; 
    for(i = 0; i < total; i++) {
        printf("Nome da Plataforma: %s\n", catalogo[i].plataforma);
        printf("Nome do Filme/Serie: %s\n", catalogo[i].nome);
        printf("Genero: %s\n", catalogo[i].gerero);
        printf("Ator Principal: %s\n", catalogo[i].atorPrincipal);
        printf("Duracao: %d\n", catalogo[i].duracao);
    }
}

void buscaGenero(char buscaGen[]) {
    int i; 
    int achou = 0; 
    for(i = 0; i < total; i++) {
        if(strcmp(buscaGen, catalogo[i].gerero)== 0) {
            printf("Genero: %s\n", catalogo[i].gerero);
            printf("Nome da Plataforma: %s\n", catalogo[i].plataforma);
            printf("Nome do Filme/Serie: %s\n", catalogo[i].nome);
            printf("Ator Principal: %s\n", catalogo[i].atorPrincipal);
            printf("Duracao: %d\n", catalogo[i].duracao);
            achou++;
        }
    }
    if(achou == 0) {
        printf("\nFilme nao encontrado....");
    }
}

void listarDuracao() {
    int i; 
    for(i = 0; i < total; i++) {
        if(catalogo[i].duracao >= 90 && catalogo[i].duracao <= 120) {
            printf("Nome do Filme/Serie: %s\n", catalogo[i].nome);
        }
    }
}

void listarPlataforma(char buscaPla[]) {
    int i; 
    for(i = 0; i < total; i++) {
        if(strcmp(buscaPla, catalogo[i].plataforma)==0) {
            printf("Nome da Plataforma: %s\n", catalogo[i].plataforma);
            printf("Nome do Filme/Serie: %s\n", catalogo[i].nome);
        }
    }
}

void left() {
    printf("Saindo...");
}

int main() {
    int op = 0; 
    printf("Escolha uma opcao: \n");
    scanf("%d", &op);

    while(op != 6) {
        switch (op)
        {
        case 1:
            cadastrarSerie(); 
            break;
        case 2: 
            listarSeries();
            break;

        case 3: {
        char buscaGen[40];
            printf("Qual Genero deseja buscar: \n");
            gets(buscaGen);
            buscaGenero(buscaGen);
            break;
        }
        case 4:
            listarDuracao();
            break;

        case 5: {
            char buscaPlat[40];
            printf("Plataforma que vai buscar: \n");
            gets(buscaPlat);
            listarPlataforma(buscaPlat);
            break;
        }
        case 6: 
            left();
            break;

        default:
        printf("Opcao invalida...");
            break;
        }
        printf("Escolha uma opcao: \n");
        scanf("%d", &op);
    }
}


