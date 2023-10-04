#include <stdio.h>

int main()
{
    char elevador, periodo, nomePeriodo = 'N/A', elevadorMaisUsadoPeriodo;
    int repete, totalAvaliacoes = 0, totalA = 0, totalB = 0, totalC = 0, totalM = 0, totalV = 0, totalN = 0, totalPeriodo = 0, totalElevador = 0;
    int PeriodoMaisUsado = 0, ElevadorMaisUsado = 0, PeriodoMenosUsado = 0;
    float diferencaPercent, porcentElevador;

    do
    {
        totalAvaliacoes++;

        do
        {
            fflush(stdin);
            printf("\nSeja bem vindo a pesquisa, digite qual elevador voce usa com mais frequencia: \nA\nB\nC\n");
            scanf(" %c", &elevador);

            if (elevador != 'a' && elevador != 'b' && elevador != 'c')
            {
                printf("\nOpcao invalidada, digite certo\n");
            }

            if (elevador == 'a')
            {
                totalA++;
                totalElevador++;
            }
            else if (elevador == 'b')
            {
                totalB++;
                totalElevador++;
            }
            else if (elevador == 'c')
            {
                totalC++;
                totalElevador++;
            }

        } while (elevador != 'a' && elevador != 'b' && elevador != 'c');

        do
        {
            fflush(stdin);
            printf("\nagora digite o periodo em que voce usa o elevador:\nM - Para matutino.\nV - Para vespertino.\nN - para noturno\n");
            scanf(" %c", &periodo);

            if (periodo != 'm' && periodo != 'v' && periodo != 'n')
            {
                printf("\nOpcao invalidada, digite certo\n");
            }

            if (periodo == 'm')
            {
                totalM++;
                totalPeriodo++;
            }
            else if (periodo == 'v')
            {
                totalV++;
                totalPeriodo++;
            }
            else if (periodo == 'n')
            {
                totalN++;
                totalPeriodo++;
            }

        } while (periodo != 'm' && periodo != 'v' && periodo != 'n');

        printf("Deseja registrar uma nova avaliacao? 1 - Sim, -1 - nao\n");
        scanf("%d", &repete);
    } while (repete != -1);

    if (totalM > totalV && totalM > totalN)
    {
        PeriodoMaisUsado = totalM;
        nomePeriodo = 'M';
    }
    else if (totalV > totalM && totalV > totalN)
    {
        PeriodoMaisUsado = totalV;
        nomePeriodo = 'V';
    }
    else
    {
        PeriodoMaisUsado = totalN;
        nomePeriodo = 'N';
    }

    if (totalA > totalB && totalA > totalC)
    {
        ElevadorMaisUsado = totalA;
        elevadorMaisUsadoPeriodo = 'A';
    }
    else if (totalB > totalA && totalB > totalC)
    {
        ElevadorMaisUsado = totalB;
        elevadorMaisUsadoPeriodo = 'B';
    }
    else
    {
        ElevadorMaisUsado = totalC;
        elevadorMaisUsadoPeriodo = 'C';
    }

    //menos usados
    if (totalM < totalV && totalM < totalN)
    {
        PeriodoMenosUsado = totalM;
    }
    else if (totalV < totalM && totalV < totalN)
    {
        PeriodoMenosUsado = totalV;
    }
    else
    {
        PeriodoMenosUsado = totalN;
    }

    //percentualDiferenca

    diferencaPercent = (float) PeriodoMaisUsado/PeriodoMenosUsado * 100;

    porcentElevador = (float) ElevadorMaisUsado/totalAvaliacoes * 100;

    printf("O periodo mais utilizado foi o periodo %c, com %d usuarios\n", nomePeriodo, PeriodoMaisUsado);
    printf("O elevador mais frequentado e em que periodo se concentra o maior fluxo e o elevador %c, com %d usuarios\n", elevadorMaisUsadoPeriodo, ElevadorMaisUsado);
    printf("A diferenca percentual entre o mais usado dos horarios e o menos usado: %.2f%%\n", diferencaPercent);
    printf ("A percentagem sobre o total de servicos prestados do elevador de media utilizacao: %.2f%%\n", porcentElevador);
    return 0;
}
