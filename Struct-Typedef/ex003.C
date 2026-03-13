#include <stdio.h>
#include <string.h>
#define T 2
typedef struct
{
    char nome[50];
    int idade;
    char sexo;
    char CPF[20];
    char cargoEmpresa[40];
    float salario;
    int dataNascimento;
    int codSetor;
} Funcionario;

void cadastrarFunc(Funcionario F[])
{
    int i;
    for (i = 0; i < T; i++)
    {
        printf("Informe seu Nome: \n"); fflush(stdin);
        gets(F[i].nome);
        printf("Informe sua idade: \n");
        scanf("%d", &F[i].idade);
        printf("Informe seu sexo: M || F \n");fflush(stdin);
        scanf(" %c", &F[i].sexo);
        printf("Informe o seu CPF: \n");fflush(stdin);
        gets(F[i].CPF);
        printf("Informe seu Cargo na Empresa: \n");
        fflush(stdin);
        gets(F[i].cargoEmpresa);
        printf("Infome seu salario: \n");
        scanf("%f", &F[i].salario);
        printf("Informe sua data de nascimento: \n");
        scanf("%d", &F[i].dataNascimento);
        printf("Infome o codigo do Setor: \n");
        scanf("%d", &F[i].codSetor);
    }
}

void exibirFuncionario(Funcionario F[])
{
    int i;
    for (i = 0; i < T; i++)
    {
        printf("\n--Funcionarios da Empresa--\n");
        printf("Nome: [%s], Idade: [%d], Sexo: [%c], CPF: [%s], Cargo na Empresa: [%s]\n, Salario do Funcionario: [%.2f], Data de Nascimento: [%d], Codigo do Setor: [%d]\n", F[i].nome, F[i].idade, F[i].sexo, F[i].CPF, F[i].cargoEmpresa, F[i].salario, F[i].dataNascimento, F[i].codSetor);
    }
}

void buscaCPF(char cpf[], Funcionario F[])
{
    int i;
    int achou = 0;
    for (i = 0; i < T; i++)
    {
        if (strcmp(cpf, F[i].CPF) == 0)
        {
            printf("O cpf procurado e [%s], com o Nome: [%s], e tem [%d] anos", F[i].CPF, F[i].nome,F[i].idade);
            achou++;
        }
    }
    if (achou == 0)
    {
        printf("CPF nao cadastrado no sistema. \n");
    }
}

int main()
{
    Funcionario F[T];
    char buscacpf[20];

    cadastrarFunc(F);

    exibirFuncionario(F);

    printf("Qual CPF deseja procurar: \n");
    fflush(stdin);
    gets(buscacpf);

    buscaCPF(buscacpf, F);

    return 0;
}