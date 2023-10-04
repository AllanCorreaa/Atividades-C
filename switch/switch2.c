#include <stdio.h>
#include <math.h>

int main () {

    int prato, sobremesa, bebida, calorias;

    printf ("Escolha o prato, 1 para vegetariano(180cal), 2 para peixe (230cal), 3 para frango (250cal) e finalmente 4 para carne (350 cal)");
    scanf ("%d", &prato);

    switch (prato)
    {
    case 1:
        calorias = 180;
        break;
    
    case 2:
        calorias = 230;
        break;

    case 3:
        calorias = 250;
        break; 

    case 4:
        calorias = 350;
        break;       
    default:
        break;
    }

    printf ("Escolha o prato, 1 para abacaxi(75cal), 2 para sorvete diet (110cal), 3 para mouse diet (170cal) e finalmente 4 para mouse de chocolate (200 cal)");
    scanf ("%d", &sobremesa);

    switch (sobremesa)
    {
    case 1:
        calorias += 75;
        break;
    
    case 2:
        calorias += 110;
        break;

    case 3:
        calorias += 170;
        break; 

    case 4:
        calorias += 200;
        break;       
    default:
        break;
    }

    printf ("Escolha o prato, 1 para cha (20cal), 2 para suco de laranja (75cal), 3 para suco de melao(100cal) e finalmente 4 para refrigerante diet (65cal)");
    scanf ("%d", &bebida);

    switch (bebida)
    {
    case 1:
        calorias += 20;
        break;
    
    case 2:
        calorias += 75;
        break;

    case 3:
        calorias += 100;
        break; 

    case 4:
        calorias += 65;
        break;       
    default:
        break;
    }

    printf ("Voce consumiu %dcal", calorias);
}