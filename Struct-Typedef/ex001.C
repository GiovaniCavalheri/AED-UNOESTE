#include <stdio.h>
#include <string.h>
#define T 7

typedef struct
{
    char titulo[100];
    char diretor[50];
    int anoLanc;
} filmes;

void preencherFilmes(filmes f[])
{

    int i;
    for (i = 0; i < T; i++)
    {
        printf("Digite o titulo do Filme: \n");
        fflush(stdin);
        gets(f[i].titulo);
        printf("Digite o diretor do Filme: \n");
        fflush(stdin);
        gets(f[i].diretor);
        printf("Digite o ano de lancamento do filme: \n");
        fflush(stdin);
        scanf("%d", &f[i].anoLanc);
    }
}

void buscaFilme(char titulo[], filmes f[])
{
    int i;
    int achou = 0;
    for (i = 0; i < T; i++)
    {
        if (strcmp(titulo, f[i].titulo) == 0)
        {
            printf("Titulo [%s], Diretor do Filme: [%s], Ano de Lancamento: [%d]", f[i].titulo, f[i].diretor, f[i].anoLanc);
            achou++;
        }
        else
            if(achou == 1)
            printf("Titulo nao cadastrado.\n");
    }
}

int main()
{
    char buscarFilme[50];

    filmes f[T];
    preencherFilmes(f);
    printf("\n");
    printf("Que titulo deseja buscar: \n");
    fflush(stdin);
    gets(buscarFilme);
    buscaFilme(buscarFilme, f);

    return 0;
}