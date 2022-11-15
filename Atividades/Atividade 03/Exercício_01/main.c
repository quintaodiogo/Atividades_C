#include <stdio.h>

int main()
{
    int valor_horas, valor_minutos, valor_segundos;
    printf("DIGITE O VALOR EM HORAS: \n");
    scanf("%d", &valor_horas);
    printf("DIGITE O VALOR EM MINUTOS: \n");
    scanf("%d", &valor_minutos);
    printf("DIGITE O VALOR EM SEGUNDOS: \n");
    scanf("%d", &valor_segundos);
    valor_horas = valor_horas * 3600;
    valor_minutos = valor_minutos * 60;
    valor_segundos = valor_segundos + valor_horas + valor_minutos;
    printf("O TEMPO EM SEGUNDOS É = %d", valor_segundos);
    return 0;
}
