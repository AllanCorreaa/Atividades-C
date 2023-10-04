#include <stdio.h>

int main () {

    int ddd;

    printf("Digite o seu DDD");
    scanf ("%d", &ddd);

    switch (ddd)
    {
    case 61: 
        printf ("Voce e de brasilia");
        break;

    case 71: 
        printf ("Voce e de salvador");
        break;

    case 11: 
        printf ("Voce e de sao paulo");
        break;

    case 21: 
        printf ("Voce e de rio de janeiro");
        break;

    case 32: 
        printf ("Voce e de juiz de fora");
        break;

    case 19: 
        printf ("Voce e de campinas");
        break;

    case 27: 
        printf ("Voce e de vitoria");
        break;

    case 31: 
        printf ("Voce e de BH");
        break;

    default:
        break;
    }

    return 0;
}