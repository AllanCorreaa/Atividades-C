#include <stdio.h>
#include <math.h>

float calculaVolume(int raio, int altura)
{
    int volume;

    volume = 3.1414592 * (pow(raio, 2)) * altura;

    return volume;
}

int main()
{
    int raio, altura;

    printf("Digite o raio ");
    scanf("%d", &raio);

    printf("Digite a altura ");
    scanf("%d", &altura);

    float resultado = calculaVolume(raio, altura);

    printf("O volume do cilindro circunferico e: %.2f", resultado);

    return 0;
}