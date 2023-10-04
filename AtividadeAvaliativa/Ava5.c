#include <stdio.h>
#include <math.h>

int main () {

    int x1, x2, y1, y2;
    float conta;

    printf ("Vamos comecar, coloque o valor do x1");
    scanf ("%d", &x1);
    printf ("\ncoloque o valor do x2");
    scanf ("%d", &x2);
    printf ("\ncoloque o valor do y1");
    scanf ("%d", &y1);
    printf ("\ncoloque o valor do y2");
    scanf ("%d", &y2);

    conta = (float) sqrt (pow((x2 - x1), 2) + pow ((y2-y1), 2));


    printf ("O resultado foi %.4f", conta);
}

