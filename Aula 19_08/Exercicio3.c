#include <stdio.h>

main () {

    float largura, comprimento, area;

    printf ("Digite a largura");
    scanf ("%f", &largura);

    printf ("Digite o comprimento");
    scanf ("%f", &comprimento);

    area = largura * comprimento;

    printf ("A area da sala e: %.2fm2", area);

}