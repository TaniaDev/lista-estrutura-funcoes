#include<stdio.h>
#include<locale.h>

int encontra_vogal(char letra){
	int i;
  char vogais[] = "aAeEiIoOuU";
  for(i=0;i < 10;i++)
    if(letra == vogais[i])
      return 1;
  return 0;	
}

int main() {
	char c;
  setlocale(LC_ALL, "Portuguese");
	printf("Entre com um caractere: ");
	scanf("%c",&c);
	if(encontra_vogal(c) == 1)
    printf("É vogal");
  else
    printf("Não é vogal");
	return 0;
}
