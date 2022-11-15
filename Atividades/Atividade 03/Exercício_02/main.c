#include <stdio.h>

int main()
{

    int valor, centena = 0, dezena = 0, unidade = 0;

    printf("DIGITE UM NÚMERO COM TRÊS DÍGITOS: \n");
    scanf("%d", &valor);

    while (valor > 0)
    {

        if (valor >= 100 && valor <= 999)
        {
            valor = valor - 100;
            centena++;
        }
        else if (valor >= 10 && valor <= 99)
        {
            valor = valor - 10;
            dezena++;
        }
        else if (valor > 0 && valor <= 9)
        {
            valor = valor - 1;
            unidade++;
        }
    }
    printf("%d%d%d", unidade, dezena, centena);
    return 0;
}
