#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void YYY(int horas, int mnts, int soma_minutos) {
  int h;
  int m;
  h = soma_minutos / 60;
  m = soma_minutos % 60;
  horas += h;
  mnts += m;
  if (mnts > 60) {
    horas += 1;
    mnts = mnts % 60;
  }
  printf("%d horas", horas);
  printf(" e %d minutos\n", mnts);
  return;
}

int main() {
  int horas;
  int mnts;
  int soma_minutos;
  printf("Digite as horas: \n");
  scanf("%d", &horas);
  for (int i = 0; i == i; i++) {
    printf("Digite os minutos: \n");
    scanf("%d", &mnts);
    if (mnts < 60)
      break;
    else
      printf("Digite um numero menor que 60\n");
  }
  printf("Voce esta adicionando minutos a %d:%d \n", horas, mnts);
  printf("Digite os minutos que voce deseja adicionar: \n");
  scanf("%d", &soma_minutos);
  YYY(horas, mnts, soma_minutos);
}
