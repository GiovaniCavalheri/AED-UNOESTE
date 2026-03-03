#include <stdio.h>

int somaMultiplos(int N)
{
    int i;
    int vetNum[N];
    int somaM = 0;

    for (i = 0; i < N; i++)
    {
        vetNum[i] = i;
    }
    
    for (i = 0; i < N; i++)
    {
        if (vetNum[i] % 3 == 0 || vetNum[i] % 5 == 0)
        {
            somaM += vetNum[i];
        }
    }
    return somaM; 
}

int main()
{
    int Num; 

    printf("Informe o valor de N: \n");
    scanf("%d", &Num);

    int res = somaMultiplos(Num);
    printf("%d", res); 

    return 0;
}