#include <stdio.h>

struct infoConta
{
   char nomeConta[50];
   int dia, mes, ano; 
   float valor; 
};

void imprime(struct infoConta c)
{
    printf("O nome da conta [%s], Data do Pagamento [%d/%d/%d] valor R$%.2f\n", c.nomeConta, c.dia, c.mes, c.ano, c.valor);
}

int main() {

    struct infoConta i;
    printf("Digite o nome da conta: \n"); 
    gets(i.nomeConta); 

    printf("Informe o dia: \n"); 
    scanf("%d", &i.dia); 

    printf("Informe o mes: \n"); 
    scanf("%d", &i.mes); 

    printf("Informe o ano: \n");
    scanf("%d", &i.ano); 
    
    printf("Informe o Valor a ser pago: \n"); 
    scanf("%f", &i.valor); 

    imprime(i);

    return 0; 
}