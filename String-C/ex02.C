#include <stdio.h>

int main() {

    char string[31]; 

    printf("String: \n");
    fgets(string, 31, stdin); 

    int contPalavras = 0; 
    int i;
    for (i = 0; string[i] != '\0'; i++)
    {
        contPalavras++;
    }

    printf("%d palavras", contPalavras);

    return 0;
}