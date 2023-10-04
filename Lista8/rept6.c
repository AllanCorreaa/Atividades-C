#include <stdio.h>

int main() {

  // Declaração das variáveis
  int mes, ano;
  char continuar;

  // Solicita ao usuário o mês e o ano
  printf("Digite o mês: ");
  scanf("%d", &mes);
  printf("Digite o ano: ");
  scanf("%d", &ano);

  // Verifica se o ano é bissexto
  int bissexto = (ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0;

  // Calcula o número de dias do mês
  int dias;
  switch (mes) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      dias = 31;
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      dias = 30;
      break;
    case 2:
      dias = 28 + bissexto;
      break;
  }

  // Exibe o número de dias
  printf("O mês %d do ano %d tem %d dias.\n", mes, ano, dias);

  // Solicita ao usuário se deseja continuar
  printf("Você deseja outras entradas (S/?)? ");
  scanf(" %c", &continuar);

  // Retorna ao começo se a resposta for S
  if (continuar == 'S') {
    return main();
  }

  return 0;
}