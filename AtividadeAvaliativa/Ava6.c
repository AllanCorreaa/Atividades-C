#include <stdio.h>

int main()
{

    int x, y;

    printf("Coloque o numero X");
    scanf("%d", &x);

    printf("Coloque o numero Y");
    scanf("%d", &y);

    if (x > 0 && y > 0)
    {
        printf("O seu ponto esta na area Q1");
    }
    else if (x < 0 && y > 0)
    {
        printf("O seu ponto esta na area Q2");
    }
    else if (x < 0 && y < 0)
    {
        printf("O seu ponto esta na area Q3");
    }
    else if (x > 0 && y < 0)
    {
        printf("O seu ponto esta na area Q4");
    } else if (x == 0 && y == 0) {
        printf ("Voce esta na origem");
    } else if (x == 0) {
        printf ("O ponto esta no eixo Y");
    } else if (y == 0) {
        printf ("O ponto esta no eixo X");
    } else {
        printf ("Seu ponto nao existe");
    }
}