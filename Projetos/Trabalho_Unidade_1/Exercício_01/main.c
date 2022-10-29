#include <stdio.h>

int main()
{
    float carro, distribuidor, impostos, valortotal;
    printf("DIGITE O VALOR DO CARRO: \n");
    scanf("%f", &carro);
    printf("DIGITE O PORCENTUAL DO DISTRIBUIDOR: \n");
    scanf("%f", &distribuidor);
    printf("DIGITE O PORCENTUAL DO IMPOSTO: \n");
    scanf("%f", &impostos);
    valortotal = carro + (carro * (distribuidor / 100)) + (carro * (impostos / 100));
    printf("O VALOR DO CARRO E = %.2f", valortotal);

    return 0;
}
