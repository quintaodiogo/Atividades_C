#include <stdio.h>
#include <string.h>

void main(void)
{
    float n1, n2, aux;
    char operacao;
    // char *soma = "S";
    // char *subtracao = "s";
    // char *multiplicacao = "m";
    // char *divisao = "d";
    printf("'S' para Soma\n");
    printf("'s' para Subtracao\n");
    printf("'m' para multiplicacao\n");
    printf("'d' para divisao\n");
    printf("DIGITE A OPERACAO: \n");
    scanf(" %c", &operacao);
    printf("'S' para Soma\n");
    printf("'s' para Subtracao\n");
    printf("'m' para multiplicacao\n");
    printf("'d' para divisao\n");
    // https://faq.cprogramming.com/cgi-bin/smartfaq.cgi?answer=1057537653&id=1043284385
    if (operacao == "S")
    {
        printf("DIGITE UM NÚMERO: \n");
        scanf("%f", &n1);
        printf("DIGITE OUTRO NÚMERO: \n");
        scanf("%f", &n2);
        aux = n1 + n2;
        printf("O VALOR DA SOMA É DE %.2f", aux);
    }
    else
    {
        if (operacao == "s")
        {
            printf("DIGITE UM NÚMERO: \n");
            scanf("%f", &n1);
            printf("DIGITE OUTRO NÚMERO: \n");
            scanf("%f", &n2);
            aux = n1 - n2;
            printf("O VALOR DA SUBTRACAO É DE %.2f", aux);
        }
        else
        {
            if (operacao == 'm')
            {
                printf("DIGITE UM NÚMERO: \n");
                scanf("%f", &n1);
                printf("DIGITE OUTRO NÚMERO: \n");
                scanf("%f", &n2);
                aux = n1 * n2;
                printf("O VALOR DA MULTIPLICACAO É DE %.2f", aux);
            }
            else
            {
                if (operacao == 'd')
                {
                    printf("DIGITE UM NÚMERO: \n");
                    scanf("%f", &n1);
                    printf("DIGITE OUTRO NÚMERO: \n");
                    scanf("%f", &n2);
                    aux = n1 / n2;
                    printf("O VALOR DA DIVISAO É DE %.2f", aux);
                }
                else
                {
                    printf("ERRO");
                }
            }
        }
    }
}
