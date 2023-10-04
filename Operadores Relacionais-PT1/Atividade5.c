#include <stdio.h>

int main () {

    int numero;

    printf ("Escreva um numero");
    scanf ("%d", &numero);

    if (numero == 5 || 200 || 400) {
        printf ("Seu numero esta nos listos (5, 200 e 400)");
    } else {
        printf ("Fora do escopo");
    }

    if ( numero > 500 && numero < 1000) {
        printf ("Seu numero e: %d esta no escopo de 500 ate 1000", numero);
    } else {
        printf ("Fora do escopo");
    }

}