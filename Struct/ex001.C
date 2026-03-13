#include <stdio.h>

struct agendaProva
{
    int dia, mes, ano, hora, min;
    char nomeDisc[50];
};

void imprime(struct agendaProva a)
{
    printf("O dia da prova [%s] sera [%d/%d/%d] no horario %d:%d", a.nomeDisc, a.dia, a.mes, a.ano, a.hora, a.min);
}

main()
{
    struct agendaProva agenda;
    printf("Digite o dia da prova: ");
    scanf("%d", &agenda.dia);
    printf("Digite o mes da prova: ");
    scanf("%d", &agenda.mes);
    printf("Digite o ano da prova: ");
    scanf("%d", &agenda.ano);
    printf("Digite a hora da prova: ");
    scanf("%d", &agenda.hora);
    printf("Digite o min. da prova: ");
    scanf("%d", &agenda.min);
    printf("Digite o dia da prova: ");
    fflush(stdin);
    gets(agenda.nomeDisc);

    imprime(agenda);

    return 0;
}
