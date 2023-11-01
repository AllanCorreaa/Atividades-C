#include <stdio.h>
#include <stdlib.h>

void imprimirMatriz(int matriz[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

void trocaColuna4Coluna10(int matriz[10][10])
{
    int aux;
    for (int i = 0; i < 10; i++)
    {
        aux = matriz[i][3];
        matriz[i][3] = matriz[i][9];
        matriz[i][9] = aux;
    }
}

int main()
{
    int matriz[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            matriz[i][j] = i * 10 + j;
        }
    }

    imprimirMatriz(matriz);

    trocaColuna4Coluna10(matriz);

    imprimirMatriz(matriz);

    return 0;
}
