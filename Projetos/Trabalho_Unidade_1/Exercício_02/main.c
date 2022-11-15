#include <stdio.h>
#include <math.h>

int main()
{
    float velocidade, aceleracao, tempo, massa;
    double trabalho, distancia;
    printf("DIGITE O VALOR DA MASSA EM TONELADAS: \n");
    scanf("%f", &massa);
    printf("DIGITE O VALOR DA ACELERACAO: \n");
    scanf("%f", &aceleracao);
    printf("DIGITE O VALOR DO TEMPO EM SEGUNDOS: \n");
    scanf("%f", &tempo);
    velocidade = tempo * aceleracao;
    distancia = (aceleracao * pow(tempo, 2)) / 2;
    trabalho = ((massa * 1000) * pow(velocidade, 2)) / 2;
    velocidade = velocidade * 3.6;

    printf("VELOCIDADE = %.2f\n", velocidade);
    printf("ESPACO PERCORRIDO  =  %.2lf\n", distancia);
    printf("TRABALHO REALIZADO  =  %.2lf\n", trabalho);

    return 0;
}
