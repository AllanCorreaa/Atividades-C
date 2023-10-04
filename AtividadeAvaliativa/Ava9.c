#include <stdio.h>

int main() {
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
    int votosNulos = 0, votosBranco = 0, voto;

    do {
        printf("Digite o codigo do voto (ou 0 para encerrar): ");
        scanf("%d", &voto);

        switch (voto) {
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 4:
                candidato4++;
                break;
            case 5:
                votosNulos++;
                break;
            case 6:
                votosBranco++;
                break;
            default:
                break;
        }

    } while (voto != 0);

    printf("Total de votos para o candidato 1: %d\n", candidato1);
    printf("Total de votos para o candidato 2: %d\n", candidato2);
    printf("Total de votos para o candidato 3: %d\n", candidato3);
    printf("Total de votos para o candidato 4: %d\n", candidato4);
    printf("Total de votos nulos: %d\n", votosNulos);
    printf("Total de votos em branco: %d\n", votosBranco);

    return 0;
}
