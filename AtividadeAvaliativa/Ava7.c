#include <stdio.h>

int main() {
    float n1, n2, n3, media, mediaGeral = 0;

    for (int i = 1; i <= 30; i++) {
        printf("Digite as notas do aluno %d (separadas por espacos): ", i);
        scanf("%f %f %f", &n1, &n2, &n3);

        media = (n1 * 2 + n2 * 4 + n3 * 4) / 10;
        mediaGeral += media;

        printf("Media do aluno %d: %.2f ", i, media);

        if (media >= 7.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    mediaGeral /= 30;
    printf("\nMedia geral da turma: %.2f\n", mediaGeral);

    return 0;
}
