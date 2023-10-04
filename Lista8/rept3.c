#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero inteiro (maior ou igual a zero): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, insira um numero inteiro não negativo.\n");
    } else {
        int termoAtual = 0;
        int termoAnterior = 1;
        int resultado = 0;
        
        if (n == 0) {
            resultado = termoAtual;
        } else if (n == 1) {
            resultado = termoAnterior;
        } else {
            for (int i = 2; i <= n; i++) {
                resultado = termoAtual + termoAnterior;
                termoAnterior = termoAtual;
                termoAtual = resultado;
            }
        }

        printf("O enesimo termo da sequencia de Fibonacci para n = %d e: %d\n", n, resultado);
    }

    return 0;
}

