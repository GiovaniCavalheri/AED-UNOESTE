#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    // Declaração das variáveis
    char frase[61];        
    char frase2[61];       
    char fraseConcat[124]; 
    int i;
    int vogais = 0;
    int espacos = 0;
    int tamanho;

    printf("Digite a primeira frase: \n");
    fgets(frase, 61, stdin);


    // 2) Mostrar o tamanho da frase
    tamanho = strlen(frase);
    printf("\nTamanho da frase: %d\n", tamanho);


    // 3) Exibir a frase em letras maiúsculas
    printf("\nFrase em MAIUSCULO:\n");
    for (i = 0; frase[i] != '\0'; i++)
    {
        printf("%c", toupper(frase[i]));
    }

    printf("\n");


    // 4) Mostrar apenas caracteres nas posições pares
    printf("\nCaracteres nas posicoes pares:\n");
    for (i = 0; frase[i] != '\0'; i++)
    {
        if (i % 2 == 0)
        {
            printf("%c", frase[i]);
        }
    }

    printf("\n");

    // 5) Contar vogais e espaços
    for (i = 0; frase[i] != '\0'; i++)
    {
        // Converte para minúsculo para facilitar comparação
        char c = tolower(frase[i]);

        // Verifica vogais
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            vogais++;
        }

        // Verifica espaços
        if (frase[i] == ' ')
        {
            espacos++;
        }
    }

    printf("\nTotal de vogais: %d\n", vogais);
    printf("Total de espacos: %d\n", espacos);


    // 6) Leitura da segunda frase
    printf("\nDigite a segunda frase: \n");
    fgets(frase2, 61, stdin);


    // strcmp retorna 0 se forem iguais
    if (strcmp(frase, frase2) == 0)
    {
        printf("As frases sao iguais.\n");
    }
    else
    {
        printf("As frases sao diferentes.\n");
    }


    // 8) Concatenar as frases
    // strcpy copia a primeira frase
    // strcat adiciona a segunda no final
    strcpy(fraseConcat, frase);
    strcat(fraseConcat, frase2);

    printf("\nFrases concatenadas:\n%s\n", fraseConcat);

    return 0;
}