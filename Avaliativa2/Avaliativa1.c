#include <stdio.h>

typedef struct
{
    int pecas;
} Funcionario1;

typedef struct
{
    int pecas;
} Funcionario2;

typedef struct
{
    int pecas;
} Funcionario3;

float calculaSalario(int pecas)
{
    float bonus;
    if (pecas < 50)
    {
        printf("Voce nao fabricou o suficiente par ganhar o bonus\n");
        bonus = 600;
    }
    else if (pecas > 50 && pecas < 80)
    {
        bonus = pecas * 0.5 + 600;
    }
    else if (pecas > 80)
    {
        bonus = (80 * 0.5) + ((pecas - 80) * 0.75) + 600;
    }

    return bonus;
}

int validaQuantidade(int quantidade)
{
    if (quantidade < 0)
    {
        printf("O numero nao pode ser negativo! ");
        return 0;
    }
    else
    {
        return 1;
    }
}

void mostraFinal(float bonus, int funcionarioNumero)
{
    printf("Salario do Funcionario %d: %.2f\n", funcionarioNumero, bonus);
}

int main()
{

    Funcionario1 Funcionario1;
    Funcionario2 Funcionario2;
    Funcionario3 Funcionario3;

    do
    {
        printf("Digite quantas pecas o Funcionario 1 fabricou: ");
        scanf("%d", &Funcionario1.pecas);
    } while (!validaQuantidade(Funcionario1.pecas));

    do
    {
        printf("Digite quantas pecas o Funcionario 2 fabricou: ");
        scanf("%d", &Funcionario2.pecas);
    } while (!validaQuantidade(Funcionario2.pecas));

    do
    {
        printf("Digite quantas pecas o Funcionario 3 fabricou: ");
        scanf("%d", &Funcionario3.pecas);
    } while (!validaQuantidade(Funcionario3.pecas));

    float bonus1 = calculaSalario(Funcionario1.pecas);
    float bonus2 = calculaSalario(Funcionario2.pecas);
    float bonus3 = calculaSalario(Funcionario3.pecas);

    printf("Salario funcionario 1 de: %.2f\n", bonus1);
    printf("Salario funcionario 2 de: %.2f\n", bonus2);
    printf("Salario funcionario 3 de: %.2f\n", bonus3);


    mostraFinal(bonus1, 1);
    mostraFinal(bonus2, 2);
    mostraFinal(bonus3, 3);
    return 0;
}