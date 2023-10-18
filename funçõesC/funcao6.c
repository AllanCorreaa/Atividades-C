#include <stdio.h>

float imc (int peso, float altura) {
    float imc;

    imc = peso / (altura * altura);

    return imc;
}

int main () {

    int peso;
    float altura;

    printf("Digite o seu peso em kg ");
    scanf("%d", &peso);

    printf("Digite a sua altura em metros ");
    scanf("%f", &altura);

    float resultado = imc(peso, altura);

    printf ("O seu indice de massa corporal e: %.2f", resultado);
    return 0;
}