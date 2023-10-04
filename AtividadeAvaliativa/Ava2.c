#include <stdio.h>
#include <stdlib.h>

int main() {
    float chico = 1.5, ze = 1.1;
    int ano = 0;

    while (chico >= ze) {
        chico += 0.02;
        ze += 0.03;
        ano++;
        printf("Chico: %.2f\tZe: %.2f\tAno: %d\n", chico, ze, ano);
    }
    printf("Sao necessarios %d anos!\n\n", ano);
}
