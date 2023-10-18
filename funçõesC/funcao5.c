#include <stdio.h>
#include <math.h>

double calculaVolume(int raio)
{
    double volume;
    volume = 4.0/3.0 * 3.1414592 * pow(raio, 3);
    return volume;
}

int main()
{
    int raio;

    printf("Digite o raio: ");
    scanf("%d", &raio);

    double resultado = calculaVolume(raio);

    printf("O volume da esfera e: %.2f\n", resultado);

    return 0;
}
