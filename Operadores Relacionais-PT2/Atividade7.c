#include <stdio.h>
#include <math.h>

int main () {

    int nota1,nota2,nota3, media;

    printf ("Digite a primeira nota");
    scanf ("%d", &nota1);

    printf ("Digite a segunda nota");
    scanf ("%d", &nota2);

    printf ("Digite a terceira nota");
    scanf ("%d", &nota3);

    media = (nota1 + nota2 + (nota3 * 2))/3;

    printf ("A sua media e: %d", media);

    if (media > 7) {
        printf ("Aprovado");
    } else {
        printf ("Reprovado");
    }

}