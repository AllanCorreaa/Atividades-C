#include <stdio.h>

int main()
{

    char sexo, olhos, cabelos;
    int anos, totalHabitantes = 0, totalEspecifico = 0, totalM = 0, totalF = 0;
    float salario, porcentagem;

    do
    {
        totalHabitantes++;

        do
        {
            fflush(stdin);
            printf("Seja bem vindo a pesquisa, vamos comecar com seu sexo, digite o M para masculino e F para feminino");
            scanf("%c", &sexo);

            if (sexo == 'm')
            {
                totalM++;
            } else {
                totalF++;
            }
            

            if (sexo != 'm' && sexo != 'f')
            {
                printf(" \n Opcao invalidada, digite certo");
            }

        } while (sexo != 'm' && sexo != 'f');

        do
        {
            fflush(stdin);
            printf("agora digite a cor dos olhos, A para azul, V para verde, C para castanhos, P para pretos");
            scanf("%c", &olhos);

            if (olhos != 'a' && olhos != 'v' && olhos != 'c' && olhos != 'p')
            {
                printf(" \n Opcao invalidada, digite certo");
            }

        } while (olhos != 'a' && olhos != 'v' && olhos != 'c' && olhos != 'p');

        do
        {
            printf("agora digite a cor dos cabelos, L para loiros, C para castanhos, P para pretos, R para ruivos");
            scanf("%s", &cabelos);

            if (cabelos != 'l' && cabelos != 'r' && cabelos != 'c' && cabelos != 'p')
            {
                printf(" \n Opcao invalidada, digite certo");
            }

        } while (cabelos != 'l' && cabelos != 'r' && cabelos != 'c' && cabelos != 'p');

        do
        {
            printf("agora digite a sua idade");
            scanf("%d", &anos);

            if (anos < 10  || anos > 100)
            {
                printf(" \n Opcao invalidada, digite certo");
            }
        } while (anos < 10 || anos > 100);

        do
        {
            printf("agora digite o seu salario");
            scanf("%f", &salario);

            if (salario < 0)
            {
                printf(" \n Opcao invalidada, digite certo");
            }
        } while (sexo < 0);

        printf("Deseja registar um novo habitante? 1 - Sim, -1 - nao");
        scanf("%d", &anos);
    } while (anos != -1);

    if (sexo == 'f' && cabelos == 'c' && olhos == 'c' && (anos > 18 && anos < 35)) {
            totalEspecifico++;
        }



    porcentagem = (float) totalEspecifico /totalHabitantes * 100;

    printf ("\nTotal de habitantes cadastrados: %d", totalHabitantes);

    printf ("\nTotal de habitantes masculinos: %d", totalM);

    printf ("\nTotal de habitantes femininos: %d", totalF);

    printf ("\nTotal da pesquisa direcionada: %d", totalEspecifico);

    printf ("\nporcentagem em relacao ao total: %.2f", porcentagem);

    return 0;
}