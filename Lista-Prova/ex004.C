#include <stdio.h>
#include <string.h>
#include <windows.h>
#define TAM 5

int topo;

typedef struct
{
    char nomePaciente[50];
    char nomeDoutor[50];
    char especialidade[40];
    int idade;
    char particular;
} Consultas;

Consultas pilha[TAM];

void criarPilha()
{
    topo = -1;
}

void inserirConsulta(Consultas C)
{
    topo++;
    pilha[topo] = C;
}

void removerConsulta()
{
    Consultas C;
    C = pilha[topo];
    topo--;
    printf("Consulta com %s, removida!", C.nomePaciente);
}

void exibirTopo()
{
    printf("Nome do Paciente: %s", pilha[topo].nomePaciente);
    printf("Nome do Doutor: %s", pilha[topo].nomeDoutor);
    printf("Especialidade do Atendimento: %s", pilha[topo].especialidade);
    printf("Idade do Paciente: %d", pilha[topo].idade);
    printf("Particular: %c", pilha[topo].particular);
}

void exibirPilha()
{
    int i;
    for (i = topo; i >= 0; i--)
    {
        printf("Nome do Paciente: %s\n", pilha[i].nomePaciente);
        printf("Nome do Doutor: %s\n", pilha[i].nomeDoutor);
        printf("Especialidade do Atendimento: %s\n", pilha[i].especialidade);
        printf("Idade do Paciente: %d\n", pilha[i].idade);
        printf("Particular: %c\n", pilha[i].particular);
    }
}

void buscarDoutor(char buscaDou[])
{
    int i;
    int achou = 0;
    for (i = 0; i <= topo; i++)
    {
        if (strcmp(buscaDou, pilha[i].nomeDoutor) == 0)
        {
            printf("Doutor %s atende a especialide %s", pilha[i].nomeDoutor, pilha[i].especialidade);
            achou++;
        }
    }
    if (achou == 0)
    {
        printf("Doutor nao encontrado...");
    }
}

void filtroPart()
{
    int i;
    for (i = 0; i <= topo; i++)
    {
        if (pilha[i].particular == 'S' || pilha[i].particular == 's')
        {
            printf("Pacientes Particulares: %s", pilha[i].nomePaciente);
        }
    }
}

void mediaIdade()
{
    int soma = 0, cont = 0;
    float media = 0;
    int i;
    for (i = 0; i <= topo; i++)
    {
        soma += pilha[i].idade;
    }

    media = soma / (topo + 1);

    for (i = 0; i <= topo; i++)
    {
        if (pilha[i].idade > media)
        {
            cont++;
        }
    }
    printf("Media de idade dos Pacientes: %.2f\n", media);
    printf("Numero de quantos estao acima da media: %d", cont);
}

void sair()
{
    printf("Saindo..");
}

void menu()
{
    printf("\n===== MENU =====\n");
    printf("1 - Criar Pilha\n");
    printf("2 - Inserir Consulta\n");
    printf("3 - Remover Consulta\n");
    printf("4 - Exibir Topo\n");
    printf("5 - Exibir Pilha\n");
    printf("6 - Buscar por Doutor\n");
    printf("7 - Listar Pacientes Particulares\n");
    printf("8 - Media de Idade e quantos estao acima\n");
    printf("9 - Sair\n");
}

int main()
{
    int op = 0; 

    while (op != 9)
    {

        menu();

        printf("Qual opcao deseja escolher: \n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            criarPilha();
            printf("Criando Pilha de Consultas: \n");
            break;

        case 2: {
            Consultas C;
            printf("Nome do Paciente: \n"); fflush(stdin);
            gets(C.nomePaciente);
            printf("Nome do Doutor: \n"); fflush(stdin);
            gets(C.nomeDoutor);
            printf("Especialidade: \n"); fflush(stdin);
            gets(C.especialidade);
            printf("Idade do Pacinete: \n");
            scanf("%d", &C.idade);
            printf("Particular: ");
            scanf("%c", &C.particular);
            inserirConsulta(C);
            break;
        }
        case 3:
            removerConsulta();
            break;
        case 4:
            exibirTopo();
            break;
        case 5:
            exibirPilha();
            break;
        case 6:
            char busca[30];
            printf("Qual doutor deseja buscar: \n");
            gets(busca);
            buscarDoutor(busca);
            break;

        case 7:
            filtroPart();
            break;
        case 8:
            mediaIdade();
            break;
        case 9:
            sair();
            break;
        default:
            printf("Opcao invalida, tente novamente...");
            break;
        }
        system("pause");
        system("cls");
        menu();
        
    }
    return 0;
}