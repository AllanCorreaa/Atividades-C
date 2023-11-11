#include <stdio.h>
#include <string.h>

typedef struct {
    char sexo[2];
    float salario;
} Assalariado;

int verificaSalario(float salario) {
    if (salario < 1.00) {
        printf("Salario invalido, digite novamente\n");
        return 0;
    } else {
        return 1;
    }
}

void classificaSalario(float salario, char *classificacao) {
    const float salarioMinimo = 1400.00;

    if (salario > salarioMinimo) {
        strcpy(classificacao, "Acima do salario minimo");
    } else if (salario == salarioMinimo) {
        strcpy(classificacao, "Igual ao salario minimo");
    } else {
        strcpy(classificacao, "Abaixo do salario minimo");
    }
}

void mostraClassificacao(Assalariado assalariado) {
    char classificacao[50];

    classificaSalario(assalariado.salario, classificacao);

    printf("\n\nSalario: %.2f", assalariado.salario);
    printf("\nClassificacao: %s", classificacao);
    printf("\nSexo: %s\n", (strcmp(assalariado.sexo, "M") == 0) ? "Masculino" : "Feminino");
}

int main() {
    int numAssalariados;
    printf("Digite o numero de assalariados: ");
    scanf("%d", &numAssalariados);

    Assalariado assalariados[numAssalariados];

    int abaixoDoSalarioMinimo = 0;
    int acimaDoSalarioMinimo = 0;

    for (int i = 0; i < numAssalariados; ++i) {
        printf("\n\nAssalariado %d:", i + 1);

        printf("\nDigite o sexo (M/F): ");
        scanf("%s", assalariados[i].sexo);

        do {
            printf("Digite o salario: ");
            scanf("%f", &assalariados[i].salario);
        } while (!verificaSalario(assalariados[i].salario));

        mostraClassificacao(assalariados[i]);

        if (assalariados[i].salario < 1400.00) {
            abaixoDoSalarioMinimo++;
        } else {
            acimaDoSalarioMinimo++;
        }
    }

    printf("\n\nResumo Final:");
    printf("\nAssalariados abaixo do salario minimo: %d", abaixoDoSalarioMinimo);
    printf("\nAssalariados acima do salario minimo: %d\n", acimaDoSalarioMinimo);

    return 0;
}

