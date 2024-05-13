#include <stdio.h>

void selecao(int n, int vetor[]){
    int i,j,m,x;
    for(i =0; i< n; i++ ){
        m=i;
        for( j = i+1; j<n; j++)
        {
            if(vetor[j]< vetor[m]){
                m =j;
            }
        }
        x = vetor[i];
        vetor[i] = vetor[m];
        vetor[m] = x;
    }
}

int main() {
    int numeros[] = {2,1,4,7,6,5};
    selecao(6,numeros);
    for(int w = 0; w <6; w++){
        printf("%d\n", numeros[w]);
    }
}
