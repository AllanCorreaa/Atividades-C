#include <stdio.h>

int main () {

    int A,B,C,D;
    int maior, menor;

    //pegaVariaveis
    printf ("Escreva o numero da letra A");
    scanf ("%d", &A);

    printf ("Escreva o numero da letra B");
    scanf ("%d", &B);

    printf ("Escreva o numero da letra C");
    scanf ("%d", &C);

    printf ("Escreva o numero da letra D");
    scanf ("%d", &D);



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

    if (D < C) {
        menor = D;
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

    if (D > C) {
        maior = D;
    } 

    printf("Primeira versao\tMenor: %d\tMaior: %d\n", menor, maior);
}
