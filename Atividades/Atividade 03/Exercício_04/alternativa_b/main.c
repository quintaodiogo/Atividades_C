#include <stdio.h>
#include <conio.h>
int main(void)
{
    char operacao;
    float n1, n2, aux;
    printf("DIGITE A OPERACAO: \n");
    scanf("%c", &operacao);

    switch (operacao)
    {
    case 'S':
        printf("DIGITE UM NÚMERO: \n");
        scanf("%f", &n1);
        printf("DIGITE OUTRO NÚMERO: \n");
        scanf("%f", &n2);
        aux = n1 + n2;
        printf("O VALOR DA SOMA É DE %.2f", aux);
        break;

    case 's':
        printf("DIGITE UM NÚMERO: \n");
        scanf("%f", &n1);
        printf("DIGITE OUTRO NÚMERO: \n");
        scanf("%f", &n2);
        aux = n1 - n2;
        printf("O VALOR DA SUBTRACAO É DE %.2f", aux);
        break;

    case 'm':
        printf("DIGITE UM NÚMERO: \n");
        scanf("%f", &n1);
        printf("DIGITE OUTRO NÚMERO: \n");
        scanf("%f", &n2);
        aux = n1 * n2;
        printf("O VALOR DA MULTIPLICACAO É DE %.2f", aux);
        break;

    case 'd':
        printf("DIGITE UM NÚMERO: \n");
        scanf("%f", &n1);
        printf("DIGITE OUTRO NÚMERO: \n");
        scanf("%f", &n2);
        aux = n1 / n2;
        printf("O VALOR DA DIVISAO É DE %.2f", aux);
        break;

    default:
        printf("ERRO!\n");
    }

    getch();
    return 0;
}