#include <stdio.h> 
#include <string.h>
#define T 20
typedef struct {

    char nome[30]; 
    char telefone[20];
    char email[40]; 

}Contato;

void addContato(Contato C[]) {
    int i; 

    for(i = 0; i < T; i++) {
        printf("Digite seu nome: \n"); fflush(stdin);
        gets(C[i].nome);
        printf("Digite seu telefone: \n"); fflush(stdin); 
        gets(C[i].telefone); 
        printf("Digite seu email: \n"); fflush(stdin); 
        gets(C[i].email);
    }
}

void buscaContato(char busca[], Contato C[]) {
    int i; 
    int achou = 0;

    for(i = 0; i < T; i++) {
        if(strcmp(busca, C[i].nome)== 0) {
            printf("Contato salvo na base de dados.\n"); 
            printf("Nome: [%s], Telefone: [%s], Email: [%s]", C[i].nome, C[i].telefone, C[i].email); 
            achou++; 
        }
    }
    if(achou == 0) {
        printf("Contato nao localizado... Tente novamente\n"); 
    }
}


int main() {
    Contato C[T];
    char bscContato[40];

    addContato(C);

    printf("Qual contato deseja buscar: \n"); fflush(stdin);
    gets(bscContato);

    buscaContato(bscContato, C);

    return 0;
}