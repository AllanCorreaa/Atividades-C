#include <stdio.h>

int main()
{
    int num1, num2, num3, angulo;

    printf("Ola, seja bem vindo ao calculador de triangulos. Digite o numero do primeiro lado");
    scanf("%d", &num1);

    printf("\nDigite o numero do segundo lado");
    scanf("%d", &num2);

    printf("\nDigite o numero do terceiro lado");
    scanf("%d", &num3);

    if (num1 + num2 > num3 && num1 + num3 > num2 && num2 + num3 > num1)
    {
        printf("\nE um triangulo");
        printf("\nAgora digite o angulo formado");
        scanf("%d", &angulo);

        if (angulo == 90)
        {
            printf("\nE um triangulo retangulo");
        }
        else if (angulo > 90)
        {
            printf("\nE um triangulo Obtusangulo");
        }
        else if (angulo < 90)
        {
            printf("\nE um triangulo acutangulo");
        }
    } else {
        printf ("Não existe");
    }
}