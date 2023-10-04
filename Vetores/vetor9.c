#include <stdio.h>

int main()

{
    int vetor[5], num, cont = 0;

    do
    {
        printf("Digite um numero par:");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            vetor[cont] = num;
            cont++;
        }
        else
        {
            printf("Numero invalido. Digite novamente:");
        }
    } while (cont < 5);

    for (int i = 0; i < 5; i++)
    {
        printf("\n%d", vetor[i]);
    }
    for (int i = 4; i >= 0; i--)
    {
        printf("\n%d", vetor[i]);
    }
}