#include <stdio.h>

void main(void)
{
    float valor_01, valor_02, valor_03;
    printf("DIGITE UM VALOR: \n");
    scanf("%f", &valor_01);
    printf("DIGITE OUTRO VALOR: \n");
    scanf("%f", &valor_02);
    printf("DIGITE OUTRO VALOR: \n");
    scanf("%f", &valor_03);
    if (valor_01 > valor_02 || valor_01 == valor_02)
    {
        if (valor_02 > valor_03)
        {
            printf("%.2f,%.2f,%.2f", valor_03, valor_02, valor_01);
        }
        else
        {
            printf("%.2f,%.2f,%.2f", valor_02, valor_03, valor_01);
        }
    }
    else if (valor_02 > valor_01)
    {
        if (valor_01 > valor_03)
        {
            printf("%.2f,%.2f,%.2f", valor_03, valor_01, valor_02);
        }
        else
        {
            printf("%.2f,%.2f,%.2f", valor_01, valor_03, valor_02);
        }
    }
    else if (valor_03 > valor_01  || valor_03 == valor_01)
    {
        if (valor_01 > valor_02)
        {
            printf("%.2f,%.2f,%.2f", valor_02, valor_01, valor_03);
        }
        else
        {
            printf("%.2f,%.2f,%.2f", valor_01, valor_02, valor_03);
        }
    }
}
