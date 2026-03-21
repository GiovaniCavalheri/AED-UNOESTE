#include <stdio.h>
#define TAM 10
#include <string.h>

typedef struct
{
    char nome[50];
    char cargo[50];
    float salario;
    int idade;
    char sexo;
} Funcionarios;

Funcionarios pilha[TAM];
int topo;

void criaPilha()
{
    topo = -1;
    printf("Criando pilha de Funcionarios.. \n");
}

int pilhaVazia()
{
    if (topo == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int pilhaCheia()
{
    if (topo == TAM - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int inserePilha(Funcionarios F)
{
    if (!pilhaCheia())
    {
        topo++;
        pilha[topo] = F;
    }
}

Funcionarios removePilha(char buscaNome[])
{
    Funcionarios F;
    char elem[30];
    if (!pilhaVazia())
    {
        F = pilha[topo]; 
        topo--; 
        printf("Funcionario %s removido.\n", F.nome);
    }
    else
    {
        printf("Pilha esta vazia!");
    }
    return F;
}

void maiorSalario()
{
    float maiorSal;
    int i;
    char pos[50];
    if (!pilhaVazia())
    {
        for (i = 0; i <= topo; i++)
        {
            if (pilha[i].salario > maiorSal)
            {
                strcpy(pos, pilha[i].nome);
                maiorSal = pilha[i].salario;
            }
        }
        printf("Nome do funcionario com o maior salario: %s com o salario de %.2f\n", pos, maiorSal);
    }
}

void mediaSalario()
{
    float media = 0; 
    int i, cont = 0;
    float soma = 0;
    if (!pilhaVazia()) {
        for (i = topo; i >= 0; i--) {
            soma += pilha[i].salario;
        }

        media = (float)soma / (topo + 1);

        for (i = 0; i <= topo; i++)
        {
            if (pilha[i].salario > media)
                cont++;
        }
    }
    printf("Media %.2f\n", media);
    printf("Numeros acima dela :%d", cont);
}

void buscaCargo(char busca[]) {
    int i;
    int achou = 0; 
    for(i = 0; i <= topo; i++) {
        if(strcmp(busca, pilha[i].cargo)== 0) {
            printf("Funcionarios %s que trabalham no cargo %s", pilha[i].nome, pilha[i].cargo); 
            achou++; 
        }
    }
        if(achou == 0) {
            printf("Cargo nao cadastrado.");
        }
}


void listaM() {
    int i, cont = 0; 
    for(i = 0; i <= topo; i++) {
        if (pilha[i].sexo == 'F' || pilha[i].sexo == 'f') {
            printf("Mulheres do sexo feminino: %s", pilha[i].nome);
            cont++;  
        }
    }
    printf("No total sao %d mulheres...", cont);
}

void faixaSalarial (float min, float max) {
    int i; 
    for(i = 0; i <= topo; i++) {
        if (pilha[i].salario >= min && pilha[i].salario <= max) {
            printf("Salario entre o que foi irmado: %.2f\n", pilha[i].salario); 
        }
    }
}

int main()
{

    Funcionarios F;

    return 0;
} 