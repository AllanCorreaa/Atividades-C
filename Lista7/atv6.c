#include <stdio.h>

int main()
{

    int frutaCodigo, carrinho = 0;

    printf("Digite o codigo de uma fruta: \n 1- Abacaxi. R$ 5,00 \n 2-Maca. R$ 1,00 \n 3- Pera. R$ 4,00");
    scanf("%d", &frutaCodigo);

    do
    {
        printf("\n Digite o codigo de uma fruta: \n 1- Abacaxi. R$ 5,00 \n 2- Maca. R$ 1,00 \n 3- Pera. R$ 4,00");
        scanf("%d", &frutaCodigo);

        switch (frutaCodigo)
        {
        case 1:
            printf("Voce escolheu o Abacaxi, deseja algo mais?\n  se quiser para basta digitar 0");
            carrinho += 5;
            break;

        case 2:
            printf("Voce escolheu a maca, deseja algo mais?\n  se quiser para basta digitar 0");
            carrinho += 1;
            break;

        case 3:
            printf("Voce escolheu a pera, deseja algo mais?\n  se quiser para basta digitar 0");
            carrinho += 4;
            break;

        default:
            printf("nao encotrado.");
            break;
        }

    } while (frutaCodigo != 0);

    printf("\n O total da sua compra resultou em: %dR$", carrinho);

    return 0;
}