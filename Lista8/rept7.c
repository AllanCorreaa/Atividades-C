#include <stdio.h>

int main() {
    int total_homens = 0;
    int total_mulheres = 0;
    float altura_total_homens = 0;
    float altura_total_mulheres = 0;
    float altura_total_grupo = 0;
    float peso_total_homens = 0;
    float peso_total_mulheres = 0;
    float peso_total_grupo = 0;

    for (int i = 1; i <= 10; i++) {
        char nome[100];
        char sexo;
        float altura, peso;

        printf("Informe o nome da pessoa %d: ", i);
        scanf("%s", nome);

        printf("Informe o sexo (M/F) da pessoa %d: ", i);
        scanf(" %c", &sexo);

        printf("Informe a altura (em metros) da pessoa %d: ", i);
        scanf("%f", &altura);

        printf("Informe o peso (em quilogramas) da pessoa %d: ", i);
        scanf("%f", &peso);

        if (sexo == 'M' || sexo == 'm') {
            total_homens++;
            altura_total_homens += altura;
            peso_total_homens += peso;
        } else if (sexo == 'F' || sexo == 'f') {
            total_mulheres++;
            altura_total_mulheres += altura;
            peso_total_mulheres += peso;
        }

        altura_total_grupo += altura;
        peso_total_grupo += peso;
    }

    float media_altura_homens = altura_total_homens / total_homens;
    float media_altura_mulheres = altura_total_mulheres / total_mulheres;
    float media_altura_grupo = altura_total_grupo / 10;
    float media_peso_homens = peso_total_homens / total_homens;
    float media_peso_mulheres = peso_total_mulheres / total_mulheres;
    float media_peso_grupo = peso_total_grupo / 10;

    printf("\nResultados:\n");
    printf("Numero de homens: %d\n", total_homens);
    printf("Numero de mulheres: %d\n", total_mulheres);
    printf("Altura media dos homens: %.2f metros\n", media_altura_homens);
    printf("Altura media das mulheres: %.2f metros\n", media_altura_mulheres);
    printf("Altura media do grupo: %.2f metros\n", media_altura_grupo);
    printf("Peso medio dos homens: %.2f quilogramas\n", media_peso_homens);
    printf("Peso medio das mulheres: %.2f quilogramas\n", media_peso_mulheres);
    printf("Peso medio do grupo: %.2f quilogramas\n", media_peso_grupo);

    return 0;
}
