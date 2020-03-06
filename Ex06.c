#include<stdio.h>

int primeiro_trimestre(int num){
	if(num > 3 || num < 1){
		printf("\nErro: numero invalido. Digite apenas os numeros 1, 2 ou 3.\n");
    return 0;
	}
	else if(num == 1)
		printf("%d- Janeiro", num);
	else if(num == 2)
		printf("%d- Fevereiro", num);
	else
		printf("%d- Marco", num);

  return 1;
	}

int main() {
	int mes;
	printf("\nDigite 1, 2 ou 3 para escolher um mes do primeiro trimestre:\n");
  scanf("%d", &mes);
	while(primeiro_trimestre(mes) == 0){
    scanf("%d", &mes);
  }
	return 0;
}
