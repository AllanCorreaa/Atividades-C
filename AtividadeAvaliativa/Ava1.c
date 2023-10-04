#include <stdio.h>

int main () {

    int x;
    float resultadoCima, multiplicacao, resultadoBaixo, resultadoFinal;

    printf ("Digite um numero para que a funcao seja calculada");
    scanf ("%d", &x);

    resultadoCima = (5 * x) + 3;
    multiplicacao = pow (x, 2);
    resultadoBaixo = sqrt (multiplicacao);
    resultadoFinal = resultadoCima / resultadoBaixo;

    printf ("O resultado e: %.2f", resultadoFinal);


    return 0;
}