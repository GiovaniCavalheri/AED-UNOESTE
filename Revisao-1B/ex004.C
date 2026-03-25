#include <stdio.h>
#include <string.h>
#define MAX 100

char pilha[MAX];
int topo = -1;

void empilha(char caractere)
{
    if (topo < MAX - 1)
    {
        topo++;
        pilha[topo] = caractere;
    }
}

char desempilha()
{
    char c;
    if (topo >= 0)
    {
        c = pilha[topo];
        topo--;
        return c;
    }
    return '\0'; 
}

// ________________Criar a função aqui____________________
int verificaPalindromo(char palavra[]){
    int i; 
    char palavraIn[40];
    for(i = 0; palavra[i] != '\0'; i++) {
        empilha(palavra[i]);
    }

    for(i = 0; i < strlen(palavra); i++) {
        palavraIn[i] = desempilha();  
    }
    palavraIn[i] = '\0';
    
        if(strcmp(palavra, palavraIn)== 0) {
            return 1;
        } else {
            return 0; 
        }
    }


main()
{
    char palavra[MAX];
    printf("Digite uma palavra: ");
    gets(palavra);
    if (verificaPalindromo(palavra))
        printf("A palavra '%s' e um palindromo!\n", palavra);
    else
        printf("A palavra '%s' nao e um palindromo.\n", palavra);
}