#include <stdio.h>

int main () {

    int comeco= 1, fim;

    printf ("Digite um numero a partir do 0 para ser listado os numeros impares ");
    scanf  ("%d", &fim);

    while (fim >= comeco) {
        printf  ("\n Numero impar: %d",comeco);
        comeco += 2;
    }


}