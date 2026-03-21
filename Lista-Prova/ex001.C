#include <stdio.h>
#include <windows.h>
#define TAM 2
int topo;

typedef struct
{
    char Nome[50];
    float nota;
} Aluno;
Aluno pilha[TAM];

void criaPilha()
{
    topo = -1;
    printf("Pilha Criada...");
}

int pilhaCheia()
{
    if (topo == TAM - 1)
    {
        return 1; // cheia
    }
    else
    {
        return 0; //
    }
}

int pilhaVazia()
{
    if (topo == -1)
    {
        return 1; // vazia
    }
    else
    {
        return 0; // nao
    }
}

void insereAl(Aluno A)
{
    if (!pilhaCheia())
    {
        topo++;
        pilha[topo] = A;
    }
}

void maiorNota()
{
    int i;
    float maior = 0;
    char pos[50];
    for (i = 0; i <= topo; i++)
    {
        if (pilha[i].nota > maior)
        {
            strcpy(pos, pilha[i].Nome);
            maior = pilha[i].nota;
        }
    }
    printf("%s com maior nota %.2f\n", pos, maior);
}

void mediaNotas()
{
    int i, cont = 0;
    float soma = 0;
    if (!pilhaVazia())
    {
        for (i = 0; i <= topo; i++)
        {
            soma += pilha[i].nota;
            cont++;
        }
        float media = (float)soma / cont;
        printf("Media: %.2f\n", media);
    }
}

void buscarAluno(char buscaNome[])
{
    int i;
    int achou = 0;
    for (i = 0; i <= topo; i++)
    {
        if (strcmp(pilha[i].Nome, buscaNome) == 0)
        {
            float pos = pilha[i].nota;
            printf("Aluno com o nome: %s, com a nota %.2f\n", buscaNome, pos);
            achou++;
        }
    }
    if (achou == 0)
    {
        printf("Nao encontrado");
    }
}

int main()
{

    Aluno A;
    char nomeBusca[30];
    criaPilha();
    int i;
    for (i = 0; i < TAM; i++)
    {
        printf("Entre com o nom: \n");
        fflush(stdin);
        gets(A.Nome);
        printf("Nota: \n");
        scanf("%f", &A.nota);
        insereAl(A);
    };

    maiorNota();
    mediaNotas();

    printf("Nome busca: \n");
    fflush(stdin);
    gets(nomeBusca);

    buscarAluno(nomeBusca);

    return 0;
}
