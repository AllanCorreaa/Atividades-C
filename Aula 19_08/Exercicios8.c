#include <stdio.h>

main () {

    float salarioAtual, porcentagemReajuste, novoSalario, reajusteFinal;

    printf ("Digite o salario atual");
    scanf ("%f", &salarioAtual);


    printf ("Digite o porcentagem de reajuste");
    scanf ("%f", &porcentagemReajuste);

    reajusteFinal =  porcentagemReajuste/100;

    novoSalario = (salarioAtual * reajusteFinal) + salarioAtual;

    printf ("");
}