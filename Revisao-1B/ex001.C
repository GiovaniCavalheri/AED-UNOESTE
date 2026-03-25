#include <stdio.h>
#include <string.h>
#define TAM 10 

typedef struct
{
    int codigo;
    char titulo[50];
    char instrutor[40];
    int qnthoras;
    float preco;
} Cursos;

void buscaCurso(char busca[], Cursos C[])
{
    int i = 0;
    int achou = 0;
    for (i = 0; i < TAM; i++)
    {
        if (strcmp(busca, C[i].titulo) == 0)
        {
            printf("Codigo do curso: %d, Titulo do Curso: %s, Instrutor: %s, Quantidade de hora: %d, Preco do Curso: %.2f\n", C[i].codigo, C[i].titulo, C[i].instrutor, C[i].qnthoras, C[i].preco);
            achou++;
        }
    }
    if (achou == 0)
    {
        printf("Curso nao encontrado...\n");
    }
}

void mediaPreco(Cursos C[])
{
    int i;
    float soma = 0, somaT = 0;
    float media = 0;
    int mediaT = 0;
    for (i = 0; i < TAM; i++)
    {
        soma += C[i].preco;
        somaT += C[i].qnthoras;
    }
    media = (float)soma / TAM;
    mediaT = somaT / TAM;

    printf("Media dos precos %.2f\n", media);
    printf("Media do Tempo:%d\n ", mediaT);
}

int main()
{
    Cursos C[TAM];
    int i = 0;
    char buscaNome[50];
    for (i = 0; i < TAM; i++)
    {
        printf("Digite o codigo do curso: \n");
        scanf("%d", &C[i].codigo);
        printf("Titulo do Livro: \n");
        fflush(stdin);
        gets(C[i].titulo);
        printf("Instrutor do curso: \n");
        fflush(stdin);
        gets(C[i].instrutor);
        printf("Quantidade de horas: \n");
        scanf("%d", &C[i].qnthoras);
        printf("Preco do curso: \n");
        scanf("%f", &C[i].preco);
    }
    printf("Digite o titulo que deseja buscar: \n");
    fflush(stdin);

    gets(buscaNome);
    buscaCurso(buscaNome, C);

    mediaPreco(C);

    return 0;
}
