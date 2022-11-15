#include <stdio.h>

int main()
{

    int valor, cem = 0, cinquenta = 0, dez = 0, um = 0;

    printf("DIGITE UM NÚMERO: \n");
    scanf("%d", &valor);

    while (valor > 0)
    {

        if (valor >= 100 )
        {
            valor = valor - 100;
            cem++;
        }
        else if (valor >= 50 && valor <= 99)
        {
            valor = valor - 50;
            cinquenta++;
        }
        else if (valor >= 10 && valor <= 99)
        {
            valor = valor - 10;
            dez++;
        }
        else if (valor > 0 && valor <= 9)
        {
            valor = valor - 1;
            um++;
        }
    }
    printf("NOTAS DE 100 = %d\n",cem);
    printf("NOTAS DE 50 = %d\n",cinquenta);
    printf("NOTAS DE 10 = %d\n",dez);
    printf("NOTAS DE 1 = %d\n",um);
    return 0;
}
