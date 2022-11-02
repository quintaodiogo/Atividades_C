#include <stdio.h>

int main()
{
    float valor_carro, percentual_distribuidor, percentual_impostos, valor_total;
    printf("DIGITE O VALOR DO CARRO: \n");
    scanf("%f", &valor_carro);
    printf("DIGITE O PORCENTUAL DO DISTRIBUIDOR: \n");
    scanf("%f", &percentual_distribuidor);
    printf("DIGITE O PORCENTUAL DO IMPOSTO: \n");
    scanf("%f", &percentual_impostos);
    valor_total = valor_carro + (valor_carro * (percentual_distribuidor / 100)) + (valor_carro * (percentual_impostos / 100));
    printf("O VALOR DO CARRO E = %.2f", valor_total);

    return 0;
}
