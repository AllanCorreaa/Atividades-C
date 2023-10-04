#include <stdio.h>
#include <limits.h>

int main() {
    int codigo, veiculos, acidentes;
    char estado[3];
    int totalVeiculos = 0, totalAcidentes = 0, totalCidadesRS = 0;
    float mediaVeiculos, mediaAcidentes, menorIndice = INT_MAX, maiorIndice = 0;
    char cidadeMenor[3], cidadeMaior[3];

    while (1) {
        printf("Digite o codigo da cidade (ou 0 para encerrar): ");
        scanf("%d", &codigo);

        if (codigo == 0) {
            break;
        }

        printf("Digite o estado da cidade: ");
        scanf("%s", estado);

        printf("Digite o numero de veiculos de passeio em 1992: ");
        scanf("%d", &veiculos);

        printf("Digite o numero de acidentes de transito com vitimas em 1992: ");
        scanf("%d", &acidentes);

        totalVeiculos += veiculos;
        totalAcidentes += acidentes;

        if (estado[0] == 'R' && estado[1] == 'S') {
            totalCidadesRS++;
        }

        float indice = (float)acidentes / veiculos;

        if (indice > maiorIndice) {
            maiorIndice = indice;
            snprintf(cidadeMaior, sizeof(cidadeMaior), "%s", estado);
        }

        if (indice < menorIndice) {
            menorIndice = indice;
            snprintf(cidadeMenor, sizeof(cidadeMenor), "%s", estado);
        }
    }

    mediaVeiculos = (float)totalVeiculos / 200;
    mediaAcidentes = (float)totalAcidentes / 200;

    printf("Maior indice de acidentes: %.2f (Cidade: %s)\n", maiorIndice, cidadeMaior);
    printf("Menor indice de acidentes: %.2f (Cidade: %s)\n", menorIndice, cidadeMenor);
    printf("Media de veiculos nas cidades brasileiras: %.2f\n", mediaVeiculos);
    printf("Media de acidentes com vitimas nas cidades do Rio Grande do Sul: %.2f\n", mediaAcidentes);

    return 0;
}
