#include <stdio.h>

float transformaTemperatura (int temperatura) {

    float novaTemp;

    novaTemp = (temperatura - 32) * 5.0/9.0;

    return novaTemp;
}

int main () {

    int fahren;
    printf ("Digite a temperatura em fahrenheit");
    scanf ("%d", &fahren);

    float resultado = transformaTemperatura (fahren);

    printf ("O resultado da transformacao de fahrenheit para celsios e: %.2f", resultado);

    return 0;
}