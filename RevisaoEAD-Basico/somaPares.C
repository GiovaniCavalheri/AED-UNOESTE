#include <stdio.h> 

    int somaPares(int vet[], int tam) {
        int i; 
        int somaP = 0; 
        for(i = 0; i < tam; i++) {
            if(vet[i] % 2 == 0 ) {
                somaP += vet[i];
            }
        }
            return somaP; 
    } 


int main() {
    int tam, i;
    printf("Digite o tamanho: \n");
    scanf("%d", &tam);

    int vetNum[tam];

    for(i = 0; i < tam; i++) {
        printf("Preencha o vetor:\n");
        scanf("%d", &vetNum[i]);
    }

    int res = somaPares(vetNum, tam);
    printf("%d", res);




    return 0; 
}