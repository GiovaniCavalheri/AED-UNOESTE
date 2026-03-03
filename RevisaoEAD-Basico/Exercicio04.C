#include <stdio.h>

int menu(int opcao) {
    return opcao;
}

// item 1
float reajuste(float valorMen) {
    float valorReajustado;
    return valorReajustado = valorMen * 1.09;
}

// item 2
float converterDol(float qntDolar) {
   return qntDolar * 5.13; 
}

// item 3
int fatorialNum(int num) {
    if(num == 1) {
        return 1;
    }
    return num * fatorialNum(num -1);
    }

// item 4
float calculoDistancia(int disntaciaKm, int qntLitros) {
    return disntaciaKm / qntLitros;
}

int main() {

    int opcao; 
    printf("\n1 - Calcular o valor de reajuste da mensalidade do plano de saude\n");
    printf("2 - Converter um valor em dolares para reais\n");
    printf("3 - Calcular o fatorial de um numero\n");
    printf("4 - Calculo de consumo de combustivel.\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    int res = menu(opcao);

    if(res == 1) {
        float valorMen; 
        printf("Valor da Mensalidade do plano de saude: \n");
        scanf("%f", &valorMen);
        
        float resp; 
        resp = reajuste(valorMen); 
        printf("Valor da Mensalidade: %.2f\n", resp);
        return 0; 
    } 

    if(res == 2) {
        float qntDolar; 
        printf("Valor em dolares que quer converter: \n");
        scanf("%f", &qntDolar);

        float resp;
        resp = converterDol(qntDolar); 
        printf("Quantidade em Reais: %.2f\n", resp); 
        return 0; 
    }

    if(res == 3) {
        int num; 
        printf("Escolha o Numero: \n");
        scanf("%d", &num);

        int resp = fatorialNum(num); 
        printf("%d", resp);
        return 0; 
    }

    if(res == 4) {
        float disntaciaKm, qntLitros; 
        printf("Distancia Percorrida em KM \n");
        scanf("%f", &disntaciaKm); 

        printf("Quantidade de Litros abastecidos: \n");
        scanf("%f", &qntLitros); 

        float resp = calculoDistancia(disntaciaKm, qntLitros); 
        if(resp <= 8) {
            printf("Venda o Opala v6 para mim por favor!\n");
        } else 
            if(resp >= 8 && resp <= 14) {
                printf("Carro Economico!\n");
            } else 
                printf("Super Economico!\n");
                    return 0; 
    }

    if(res != 4) {
        printf("Saindo do Algoritimo...\n"); 
        return 0; 
    }

    return 0; 
}