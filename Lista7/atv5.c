#include <stdio.h>

int main()
{

    int i, soma = 0;

    for (i = 0; i <= 100; i++)
    {

        if (i % 2 == 0)
        {
            soma += i;
        }
    }

    printf("Sera mostrado o resultado da soma dos 50 primeiros numeros pares: %d \n", soma);

    return 0;
}