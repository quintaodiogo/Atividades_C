#include <stdio.h>

void main(void)
{
    float nota;
    printf("DIGITE O VALOR DA NOTA: \n");
    scanf("%f", &nota);
    if (nota >= 9.0 && nota <= 10.0)
    {
        printf("NOTA = %.1f CONCEITO = A", nota);
    }
    else if (nota >= 7.5 && nota < 9.0)
    {
        printf("NOTA = %.1f CONCEITO = B", nota);
    }
    else if (nota >= 6 && nota < 7.5)
    {
        printf("NOTA = %.1f CONCEITO = C", nota);
    }
    else if (nota >= 0 && nota < 6)
    {
        printf("NOTA = %.1f CONCEITO = D", nota);
    }
}
