#include <stdio.h>
#include <math.h>

int main () {


    int a, b, c;
    double delta, equacaoPositiva, equacaoNegativa, divisor, equacao0;

    printf ("Ola, digite o primeiro elemento da equacao de segundo grau");
    scanf ("%d",&a);

    printf ("agora digite o segundo elemento da equacao de segundo grau");
    scanf ("%d",&b);

    printf ("agora digite o terceiro elemento da equacao de segundo grau");
    scanf ("%d",&c);

    delta = (pow (b, 2)) - 4 * a * c;
    divisor = a*2;
    equacaoPositiva = (- b + sqrt (delta)) /divisor;
    equacaoNegativa = (- b - sqrt (delta)) /divisor;
    equacao0 = (- (b) )/divisor; 

    
    if (delta == 0) {
        printf ("Seu resultado unico e %.2lf", equacao0);   
    } else if (delta > 0) {
        printf ( "A sua equacao de segundo grau tem resultados de %.2lf e %.2lf", equacaoPositiva, equacaoNegativa);
    } else {
        printf ("Nao ha raiz no conjunto de numeros reais");
    }




    return 0;
}