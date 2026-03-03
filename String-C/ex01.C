#include <stdio.h>

int main()
{

    char string[31];

    printf("Insira a frase: \n");
    fgets(string, 31, stdin);

    // Percorrendo até o fim
    int i;
    int contVogais = 0; 
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
        {
            contVogais++; 
        }
    }

    printf("%d Vogais na string\n", contVogais);

    return 0;
}