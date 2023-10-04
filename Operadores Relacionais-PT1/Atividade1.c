#include <stdio.h>
#include <math.h>

int main () {

    float numero, raiz, potencia;


    printf ("Insira um numero para realizar a raiz quadrada");
    scanf ("%f", &numero);

    raiz = sqrt(numero);
    potencia = numero * numero;

    if (raiz >= 0) {
        printf ("A raiz quadrada do seu numero e %.2f", raiz);
    } else {
        printf ("O seu numero potenciado a 2 e : %.2f", potencia);
    }

}