#include <stdio.h>

char sexo, nome[50];
int repete, totalPesquisa, idade, voto, votoA = 0, votoB = 0, votoC = 0, votoD = 0, votoE = 0;
int qntMulher;
int candidataMaisVotada = 0;
int main()
{

    do
    {
        totalPesquisa++;
        char nome[50];

            printf("Qual e o seu nome?\n");
            fgets(nome, 50, stdin);
            getchar();

        do
        {
            printf("Ola, seja bem vindo a pesquisa, vamos comecar pelo sexo\nM - para masculino\nF - feminino\n");
            scanf("%c", &sexo);

            if (sexo != 'M' && sexo != 'F')
            {
                printf("Opcao invalida, coloque o valor correto");
            }

            if (sexo == 'F')
            {
                qntMulher++;
            }
        } while (sexo != 'M' && sexo != 'F');

        do
        {
            printf("A sua idade\n");
            scanf("%d", &idade);

            if (idade < 12)
            {
                printf("Opcao invalida, coloque o valor correto\n");
            }
        } while (idade < 12);

        do
        {
            printf("Digite seu voto.\n1- Sam kerr\n2- Alex Morgan\n3- Dzeniffer\n4- Amandine Henry\n5- Marta Viera\n");
            scanf("%d", &voto);

            if (voto < 1 || voto > 5)
            {
                printf("Opcao invalida, coloque o valor correto\n");
            }

        } while (voto < 1 || voto > 5);

        switch (voto)
        {
        case 1:
            votoA++;
            break;
        case 2:
            votoB++;
            break;
        case 3:
            votoC++;
            break;
        case 4:
            votoD++;
            break;
        case 5:
            votoE++;
            break;
        }

        printf("Quer continuar a pesquisa ?\n2- Para Sim\n1- Para nao\n");
        scanf("%d", &repete);
    } while (repete != 1);

    printf("A jogadora Sam Kerr recebeu %d votos", votoA);
    printf("\nA jogadora Alex Morgan recebeu %d votos", votoB);
    printf("\nA jogadora Dzeniffer recebeu %d votos", votoC);
    printf("\nA jogadora Amendine recebeu %d votos", votoD);
    printf("\nA jogadora Marta Vieira recebeu %d votos\n", votoE);

    if (votoA < votoB && votoA < votoC && votoA < votoD && votoA < votoE)
    {
        candidataMaisVotada = votoA;
        printf("\nA canditada mais votada foi Sam kerr");
    }
    else if (votoB < votoA && votoB < votoC && votoB < votoD && votoB < votoE)
    {
        candidataMaisVotada = votoB;
        printf("\nA canditada mais votada foi Alex Morgan");
    }
    else if (votoC < votoA && votoC < votoB && votoC < votoD && votoC < votoE)
    {
        candidataMaisVotada = votoC;
        printf("\nA canditada mais votada foi Dzeniffer");
    }
    else if (votoD < votoA && votoD < votoB && votoD < votoC && votoD < votoE)
    {
        candidataMaisVotada = votoD;
        printf("\nA canditada mais votada foi Amendine");
    }
    else
    {
        candidataMaisVotada = votoE;
        printf("\nA canditada mais votada foi Marta Viera");
    }

    printf("\nA quantidade de mulheres que responderam a pesquisa foram %d\n", qntMulher);

    return 0;
}
