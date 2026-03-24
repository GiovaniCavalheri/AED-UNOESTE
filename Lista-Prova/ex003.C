#include <stdio.h>
#include <string.h>

#define TAM 5
typedef struct {
    char titulo[50];
    char autor[50]; 
    int ano;
    float preco; 
}Livros;

int topo; 
Livros pilha[TAM]; 

void criaPilha() {
    topo = -1; 
    printf("Criando pilha..."); 
}

int pilhaVazia() {
    if(topo == -1) {
        return 1; 
    } else {
        return 0;
    }
}

int pilhaCheia() {
    if(topo == TAM - 1) {
        return 1; 
    } else {
        return 0; 
    }
}

void InserirLivro(Livros L) {
    if(!pilhaCheia()) {
        topo++;
        pilha[topo] = L; 
    }
}

void removeLivro(char nomeRemove[]) {
    Livros L;  
    if(!pilhaVazia()) {
        L = pilha[topo]; 
        topo--;
        printf("Livro removido foi o %s", L.titulo);
    }
}

void exibirTopo() {
    if(!pilhaVazia()) {
        printf("Titulo do livro: %s\n", pilha[topo].titulo);
        printf("Autor do livro: %s\n", pilha[topo].autor);
        printf("Ano do livro: %d\n", pilha[topo].ano); 
        printf("Preco do livro: %.2f\n", pilha[topo].preco); 
    } 
}

void exibirPilha() {
    int i; 
    if(!pilhaVazia()) {
        for(i = topo; i >= 0; i--) {
            printf("Titulo do livro: %s\n", pilha[i].titulo);
            printf("Autor do livro: %s\n", pilha[topo].autor);
            printf("Ano do livro: %d\n", pilha[i].ano);
            printf("Preco do livro: %.2f\n", pilha[i].preco);
        }
    }
    else {
        printf("Pilha vazia..");
    }
}

void maisCaro() {
    int i; 
    float maior = 0; 
    for(i = 0; i <= topo; i++) {
        if(pilha[i].preco > maior) {
            maior = pilha[i].preco;
        }
    }
    printf("Livro com preco mais caro e de: %.2f\n", maior);
}

void mediaPreco(){
    int i; 
    float soma = 0; 
    float media; 
    int cont = 0; 
    for(i = 0; i <= topo; i++) {
        soma += pilha[i].preco;
    }
    
    media = (float) soma / (topo + 1);

    for(i = 0; i <= topo; i++){
        if(pilha[i].preco > media) {
            cont++;
        }
    }

    printf("Media de precos dos livros: %.2f\n", media);
    printf("Numero de quantos estao acima: %d", cont); 
}


void buscarAutor(char buscaAutor[]) {
    int i; 
    for(i = 0; i <= topo; i++){
        if(strcmp(buscaAutor, pilha[i].autor) == 0) {
            printf("Autor localizado: %s com o livro: %s", pilha[i].autor, pilha[i].titulo);
        }
    }
}

void livroPubli(int ano) {
    int i; 
    for(i = 0; i<=topo; i++) {
        if (pilha[i].ano < ano) {
            printf("Livro: %s | Autor: %s | Ano: %d\n",
                   pilha[i].titulo,
                   pilha[i].autor,
                   pilha[i].ano);
        }
    }
}


int main() {




    return 0;
}