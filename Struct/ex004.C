#include <stdio.h> 

struct acoesBolsa
{
    char nomeEmp[50]; 
    char atuacao[50];
    float valor; 
};

void imprimeCampos(struct acoesBolsa a) {
    printf("Empresa: [%s], Atuando: [%s], no valor da acao: [%.2f\n]", a.nomeEmp, a.atuacao, a.valor);
}

float comprar(struct acoesBolsa a) {
    int quant; 
    printf("Quantidade de acoes que deseja comprar: \n"); 
    scanf("%d", &quant); 
    return (float)quant * a.valor; 

}


int main() {

    struct acoesBolsa a; 

    printf("Nome da Empresa:\n");
    gets(a.nomeEmp); 

    printf("Atuacao:\n");
    gets(a.atuacao);

    printf("Digite o Valor da acao: \n"); 
    scanf("%f", &a.valor);

    imprimeCampos(a); 

    float resp = comprar(a); 
    printf("%.2f\n", resp);

    return 0; 
}
