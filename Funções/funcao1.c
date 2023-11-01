#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *opcoes[3] = {
    "1. A vista com 10% de desconto",
    "2. Em duas vezes (preco da etiqueta)",
    "3. Parcelado de 3 ate 10 vezes com 3% de juros ao mes"
};

float valor = 0;

void exibe_menu() {
    int i;
    printf("\nOpcoes de pagamento disponiveis:\n");
    for (i = 0; i < 3; i++) {
        printf("%s\n", opcoes[i]);
    }
}

int main() {
    int wopcao = 1;
    float total;
    int n_prestacoes;
    float entrada;
    float prestacao;
    float w_valor;

    while (1) {
        printf("Informe o valor da compra ou digite 0 para terminar: ");
        scanf("%f", &valor);
        if (valor == 0) {
            break;
        }

        if (valor <= 0) {
            printf("Valor invalido. Por favor, insira um valor positivo.\n");
            continue;
        }

        exibe_menu();
        do {
            printf("Informe a opcao entre 1 e 3: ");
            scanf("%d", &wopcao);
        } while (wopcao < 1 || wopcao > 3);

        switch (wopcao) {
            case 1:
                n_prestacoes = 1;
                entrada = valor * 0.9;
                prestacao = 0;
                break;
            case 2:
                n_prestacoes = 2;
                prestacao = valor / 2;
                entrada = prestacao;
                break;
            case 3:
                if (valor <= 100) {
                    printf("Parcelamento so disponivel para compras maiores que 100!\n");
                    break;
                }
                do {
                    printf("Quantas parcelas? Entre 3 e 10: ");
                    scanf("%d", &n_prestacoes);
                } while (n_prestacoes < 3 || n_prestacoes > 10);
                w_valor = valor * (1 + 0.03 * n_prestacoes);
                prestacao = w_valor / n_prestacoes;
                entrada = prestacao;
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }

        if (n_prestacoes == 1) {
            printf("O valor %.2f sera pago a vista com desconto por apenas %.2f\n", valor, entrada);
        } else {
            printf("O valor %.2f sera pago em %d prestacoes\n", valor, n_prestacoes);
            printf("Entrada de %.2f e mais %d prestacoes de %.2f\n", entrada, n_prestacoes - 1, prestacao);
        }
    }

    return 0;
}
