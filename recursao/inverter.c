#include <stdio.h>

main(){
    int vetorInteiro[] = {1,2,3};
    int size = (sizeof(vetorInteiro)/sizeof(int));
    printf("%d",size);
    int value = somaVetor(vetorInteiro, 3);
    printf("Soma do vetor %d",value);

}

int somaVetor(int v[], int n){

    if(n == 0){
        return v[0];
    }

    int soma = somaVetor(v, n-1);
    soma+= v[n-1];
    return soma;
}