#include <stdio.h>

int main () {


    int A,B,C;
    int maior, meio, menor;

    printf ("Escreva o numero da letra A");
    scanf ("%d", &A);

    printf ("Escreva o numero da letra B");
    scanf ("%d", &B);

    printf ("Escreva o numero da letra C");
    scanf ("%d", &C);

    if(A < B){
        if(A < C) 
            menor = A;
        else
            menor = C;
    } else{
        if(B < C)
            menor = B;
        else
            menor = C;
    }

    // encontrando o maior
    if(A > B){
        if(B > C)
            maior = A;
        else
            maior = C;
    }
    else{
        if(B > C)
            maior = B;
        else
            maior = C;
    }

    if(A < maior && A > menor) {
        meio = A;
    }
    
    if(B < maior && B > menor) {
        meio = B;
    }

    if(C < maior && C > menor) {
        meio = C;
    }
        

    printf ("Esses sao os valores em ordem decrescente \nO maior e: %d \nO do meio: %d \nO menor e: %d", maior, meio, menor);

}