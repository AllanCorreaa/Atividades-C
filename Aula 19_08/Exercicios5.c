#include <stdio.h>

main () {

    float custo, frete, despesa, valorBruto, valorVenda, lucro;

    printf ("\n Digite o custo");
    scanf ("%f", &custo);

    printf ("\n Digite o frete");
    scanf ("%f", &frete);

    printf ("\n Digite a despesa");
    scanf ("%f", &despesa);

    valorBruto = custo + frete + despesa;

    printf ("O valor bruto e: R$%.2f. Agora digite o valor da venda:", valorBruto);
    scanf ("%f", &valorVenda);

    lucro = ((valorVenda - valorBruto)*100)/valorBruto;

    printf ("Sua porcentagem de lucro e: %.2f%%", lucro);
}