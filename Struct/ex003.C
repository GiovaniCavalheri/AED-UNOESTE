#include <stdio.h>

struct fichaPaciente
{
    float peso, altura;
};

float calculaIMC(float peso, float altura)
{
    float resp = peso / (altura * altura);
    return resp;
}

void classificaIMC(float resp)
{
    if (resp < 18.5)
    {
        printf("Baixo Peso.\n");
    }
    else if (resp >= 18.5 && resp <= 24.9)
    {
        printf("Peso Normal");
    }
    else if (resp >= 25 && resp <= 29.9)
    {
        printf("Sobrepeso");
    }
    else if (resp >= 30 && resp <= 34.9)
    {
        printf("Obesidade grau |");
    }
    else if (resp >= 35 && resp <= 39.9)
    {
        printf("Obesidade grau ||");
    }
    else
    {
        printf("Obesidade grau |||");
    }
}

int main()
{

    struct fichaPaciente Ficha; 

    printf("Entre com o peso: \n");
    scanf("%f", &Ficha.peso);
    printf("Entre com a altura: \n");
    scanf("%f", &Ficha.altura);

    float resp = calculaIMC(Ficha.peso, Ficha.altura); 

    classificaIMC(resp); 

    return 0;
}