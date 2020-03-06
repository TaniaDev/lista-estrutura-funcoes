#include <stdio.h>

int acha_maior (int a, int b){
    return a > b ? a : b;
}

int acha_igual (int a, int b){
  if (a == b)
    return 1;
  return 0;
}

int main () {
    int x, y, verifIgual;
    scanf("%d", &x);
    scanf("%d", &y);
    while(acha_igual(x, y) == 1){
      printf("\nErro: digite um numero diferente do anterior\n");
      scanf("%d", &y);
    }
    int r = acha_maior(x, y);
    printf("Maior: %d\n", r);
    return 0;
}
