#include <stdio.h>

void insercao(int n, int v[]){
    int i,j,x;
    for(j =1; j< n; j++){
        x = v[j];
        for(i = j-1; i>=0 && v[i]>x; i--){
            v[i+1]=v[i];
        }
        v[i+1] = x;
    }
}

int main() {
    int numeros[] = {50,54,80,62,74,99,61,52,64,89,58};
    insercao(11, numeros);
    for(int w = 0; w < 11; w++){
        printf("%d\n", numeros[w]);
    }
}
