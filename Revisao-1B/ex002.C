#include <stdio.h>

typedef struct
{
    char nome[50];
    char classe[30];
    int nivel;
    int pontosVida;
} DadosPersonagem;

DadosPersonagem Personagem()
{
    DadosPersonagem p;
    printf("Digite o nome do Personagem: \n");
    fflush(stdin);
    gets(p.nome);
    printf("Digite a classe do Personagem: \n");
    fflush(stdin);
    gets(p.classe);
    printf("Digite o nivel do Personagem: \n");
    scanf("%d", &p.nivel);
    printf("Digite os pontos de vida do Personagem: \n");
    scanf("%d", &p.pontosVida);
    return p;
}

int main()
{
    DadosPersonagem p1 = Personagem();
    DadosPersonagem p2 = Personagem();

    printf("Nome do Personagem: %s\n Classe do Personagem %s\n Nivel do Personagem: %d\n Pontos de vida: %d", p1.nome, p1.classe, p1.nivel, p1.pontosVida);

    printf("\nNome do Personagem 2: %s\n Classe do Personagem %s\n Nivel do Personagem: %d\n Pontos de vida: %d", p2.nome, p2.classe, p2.nivel, p2.pontosVida);
    return 0;
}
