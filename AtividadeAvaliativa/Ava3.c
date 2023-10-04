#include <stdio.h>

int main()
{

    int num1, num2, num3;

    printf("Ola, seja bem vindo ao calculador de triangulos. Digite o numero do primeiro lado");
    scanf("%d", &num1);

    printf("\nDigite o numero do segundo lado");
    scanf("%d", &num2);

    printf("\nDigite o numero do terceiro lado");
    scanf("%d", &num3);

    if (num1 + num2 > num3 && num1 + num3 > num2 && num2 + num3 > num1)
    {
        printf ("\nE um triangulo");
        if (num1 == num2 && num1 == num3)
        {
            printf("\nEsse e um triangulo equilatero!");
        }

        if (num1 != num2 && num1 != num3 && num2 != num3)
        {
            printf("\nEsse e um triangulo escaleno");
        }

        if (num1 == num2 || num1 == num3 || num2 == num3)
        {
            printf("Esse e um triangulo isosceles ");
        }
    }
}