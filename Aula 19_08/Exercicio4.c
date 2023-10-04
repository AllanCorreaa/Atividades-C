#include <stdio.h>

main () {

    float reais, cotacaoDolar, valorDolar;

    printf ("Digite o valor em reais");
    scanf ("%f", &reais);

    printf ("Digite a cotacao do dolar");
    scanf ("%f", &cotacaoDolar);

    valorDolar = reais/cotacaoDolar;

    printf ("Quantos dolares da %.2f", valorDolar);




}