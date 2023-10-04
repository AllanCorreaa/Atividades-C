#include <stdio.h>

int main() {
    float salario, mediaSalario, mediaFilhos, maiorSalario;
    int numFilhos, totalPessoas = 0, percentualAte100 = 0;

    mediaSalario = mediaFilhos = maiorSalario = 0;

    do {
        printf("Digite o salario (ou um valor negativo para encerrar): ");
        scanf("%f", &salario);

        if (salario < 0) {
            break;
        }

        printf("Digite o numero de filhos: ");
        scanf("%d", &numFilhos);

        mediaSalario += salario;
        mediaFilhos += numFilhos;

        if (salario > maiorSalario) {
            maiorSalario = salario;
        }

        if (salario <= 100.0) {
            percentualAte100++;
        }

        totalPessoas++;

    } while (1);

    mediaSalario /= totalPessoas;
    mediaFilhos /= totalPessoas;

    printf("Media do salario da populacao: %.2f\n", mediaSalario);
    printf("Media do numero de filhos: %.2f\n", mediaFilhos);
    printf("Maior salario: %.2f\n", maiorSalario);
    printf("Percentual de pessoas com salario ate R$100,00: %.2f%%\n", (float)percentualAte100 / totalPessoas * 100);

    return 0;
}
