#include <stdio.h> 
#define T 5

typedef struct {
    char corO[20];
}CorOlho;

typedef struct {
    char corC[20]; 
}CorCabelo;

typedef struct {
    char sexo[30]; 
    int idade; 
    CorOlho O; 
    CorCabelo C; 
}Pessoa;

void preencherPessoa(Pessoa P[]) {
    int i; 
    for(i = 0; i < T; i++) {
        printf("Qual seu sexo: \n"); fflush(stdin); 
        gets(P[i].sexo); 
        printf("Cor dos olhos: \n"); fflush(stdin); 
        gets(P[i].O.corO);
        printf("Cor do Cabelo: \n"); fflush(stdin);
        gets(P[i].C.corC); 
        printf("Digite sua idade: \n"); 
        scanf("%d", &P[i].idade); 
    }
} 

float definirMedia(Pessoa P[]) {
    int i; 
    int soma = 0; 
    float media; 
    int cont = 0; 
    for(i = 0; i < T; i++) {
        if (P[i].O.corO == "Castanho" || P[i].O.corO == "castanho" && P[i].C.corC == "preto" || P[i].C.corC == "Preto") {
            soma += P[i].idade; 
            cont++; 
        }
    }
    return media = soma / cont;
}

int devolveIdade(Pessoa P[]) {
    int i; 
    int maior = 0; 
    for(i = 0; i < T; i++) {
        if(P[i].idade > maior) {
            maior = P[i].idade;
        }

        return maior; 
    }
}

int individuoF(Pessoa P[]) {
    int i; 
    int cont = 0; 
    for(i = 0; i < T; i++) {
        if(P[i].sexo == "F" || P[i].sexo == "f" && P[i].idade >= 18 && P[i].idade <= 35) {
            cont++; 
        }
    }
    return cont; 
}

int main() {
    Pessoa P[T]; 

    preencherPessoa(P); 

    int respIdade = devolveIdade(P); 

    printf("A maior maior idade e [%d]", respIdade); 

    int resp = individuoF(P); 
    printf("%d", resp); 

    return 0;
}