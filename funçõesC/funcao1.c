#include <stdio.h>

int maiorNumero(int n1, int n2)
{
    int numeroMaior;
    if (n1 > n2)
    {
        numeroMaior = n1;
    }
    else
    {
        numeroMaior = n2;
    }

    return numeroMaior;
}

int main()
{
    int num1, num2;
    printf("Escreva o primeiro numero: ");
    scanf("%d", &num1);

    printf("Escreva o Segundo numero: ");
    scanf("%d", &num2);

    int resultado = maiorNumero(num1, num2);

    printf("\nO resultado da operacao e: %d", resultado);

    return 0;
}
