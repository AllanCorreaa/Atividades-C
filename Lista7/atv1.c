#include <stdio.h>

int main (){
    
    int com = 0,fim ;
    

    printf("Informe um numero para ser listado ");
    scanf("%d", &fim);

    while (com <= fim) {
        printf ("\n %d",com); 
        com++;
    }
    
    return 0;
}