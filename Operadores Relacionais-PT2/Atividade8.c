#include <stdio.h>

int main () {

    int anos, anosTrabalho;
    int sexo;

    printf ("Voce e Homem ou Mulher?, digite 1 para homem e 2 para mulher");
    scanf ("%d", &sexo);

    if (sexo == 1) {
        printf ("Quantos anos voce tem? ");
        scanf ("%d", &anos);
        
        printf ("Quantos anos de contribuicao voce tem?");
        scanf ("%d", &anosTrabalho);

        if (anos > 64 && anosTrabalho > 29) {
            printf ("Voce pode aposentar");
        } else {
            printf ("Voce nao pode aposentar");
        }
    }

    if (sexo == 2) {
        printf ("Quantos anos voce tem?");
        scanf ("%d", &anos);
        
        printf ("Quantos anos de contribuicao voce tem?");
        scanf ("%d", &anosTrabalho);
        

        if (anos > 59 && anosTrabalho > 24) {
            printf ("Voce pode aposentar");
        } else {
            printf ("Voce nao pode aposentar");
        }
    }
}