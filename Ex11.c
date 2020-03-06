#include <stdio.h>

void inverte_vetor(int v[], int t){
    int aux, i, j;
    for (i=t-1; i>=t/2; i--) {
        for(j=0;j<t/2;j++){
            aux = v[j];
            v[j] = v[i];
            v[i] = aux;
            i--;
        }
    }
}

int main() {
    int i, v[] = {10, 20, 30, 40, 50, 60, 70};
    inverte_vetor(v, 6);
    printf("\nInvertido: ");
    for(i=0;i<6;i++){
        printf("%d ", v[i]);
    }
    return 0;
}
