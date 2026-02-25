#include <stdio.h>

float estatistica() {
    int i; 
    int numbers, number; 

    printf("Quantos numeros deseja informar: \n");
    scanf("%d", &numbers);

    float soma = 0; 
    int pares = 0; 

    for(i = 0; i < numbers; i++) {
        printf("Insira o numero\n");
        scanf("%d", &number);  
        
        if(number % 2 == 0) {
            pares++;
        }
        soma += number; 
    }

    float media = soma / numbers; 
    return media; 
}


int main() {

    float res = estatistica(); 
    printf("%d", res); 


    return 0; 
}