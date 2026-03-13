#include<stdio.h>
#include<string.h>

#define T 2

typedef struct 
{
    char rua[30];
    char bairro[30]; 
    char cidade[40]; 
    char estado[20]; 
    int cep; 
}Endereco;



typedef struct {
    char nome[40]; 
    Endereco E; 
    float salario; 
    char RG[20]; 
    char CPF[20];
    char estadoCivil[40]; 
    int phone;
    int idade; 
    char sexo; 
}Cadastro;

void cadastroPessoa(Cadastro C[]) {
    int i; for(i = 0; i < T; i++) {
        printf("Digite seu nome: \n"); fflush(stdin); 
        gets(C[i].nome); 
        printf("Infome sua Rua: \n"); fflush(stdin); 
        gets(C[i].E.rua); 
        printf("Infome seu Bairro: \n"); fflush(stdin); 
        gets(C[i].E.bairro); 
        printf("Informe sua cidade: \n"); fflush(stdin); 
        gets(C[i].E.cidade); 
        printf("Informe seu Estado: \n"); fflush(stdin); 
        gets(C[i].E.estado); 
        printf("Informe seu CEP: \n"); 
        scanf("%d", &C[i].E.cep);
        printf("Informe o Salario: \n"); 
        scanf("%f", &C[i].salario); 
        printf("Informe o seu RG: \n"); fflush(stdin); 
        gets(C[i].RG); 
        printf("Informe seu cpf: \n"); fflush(stdin); 
        gets(C[i].CPF); 
        printf("Informe seu estado Civil: \n"); fflush(stdin); 
        gets(C[i].estadoCivil); 
        printf("Informe o Telefone: \n"); 
        scanf("%d", &C[i].phone); 
        printf("Informe sua idade: \n"); 
        scanf("%d", &C[i].idade); 
        printf("Informe seu sexo: \n"); 
        scanf(" %c", &C[i].sexo); 
    }
}

void buscaRG(char RG[], Cadastro C[]) {
    int i; 
    int achou = 0;

    for(i = 0; i < T; i++) {
        if (strcmp(RG, C[i].RG) == 0) {
            printf("RG Encontrado: [%s], seu nome: [%s], seu telefone: %d", C[i].RG, C[i].nome, C[i].phone);
            achou++; 
        }
    }
    if(achou == 0) {
        printf("RG nao encontrado...\n"); 
    }
}

int maiorIdade(Cadastro C[]) {
    int i; 
    int maior = 0; 
    for(i = 0; i < T; i++) {
        if(C[i].idade > maior) {
            maior = C[i].idade; 
        }
    }
    return maior;
}

void listarMasc(Cadastro C[]) {
    int i; 
    for(i = 0; i < T; i++) {
        if(C[i].sexo == 'M' || C[i].sexo == 'm') {
            printf("Lista de Homens: Nome: [%s]\n", C[i].nome); 
        }
    }
}


int main() {

    Cadastro C[T]; 
    cadastroPessoa(C);
    char bscRG[20]; 

    printf("Qual RG deseja buscar: \n"); fflush(stdin); 
    gets(bscRG);

    // achar RG
    buscaRG(bscRG, C); 

    int res = maiorIdade(C); 
    printf("%d", res); 

    listarMasc(C); 


    return 0; 
}