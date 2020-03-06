#include<stdio.h>

int calculaPrimo(int num){
	int i, aux=1;
    for(i = 2; i <= num; i++){
        if (num % i == 0){
            aux++;
        }
    }
    return aux;
}

int main(){
    int num;
    scanf("%d",&num);
    if (calculaPrimo(num) == 2)
        printf("%d = primo\n", num);
	  else
        printf("%d = nao primo\n", num);	 
	
    return 0;
}