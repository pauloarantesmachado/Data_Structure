#include <stdio.h>

void ShellSort(int v[],int n){
    int x[] = {0,2,4};
    for(int i=0;i<3;i++){
    int gap = x[i]; // gap = 0 | gap = 2 | gap = 4
    for(int i=gap;i<n;i++){ // i =4 | i =5
        int temp = v[i]; // 99 | 27
        int j=i; // j = 4 | j = 5 
        while(j>=gap && v[j-gap]>temp){ //  65 > 99 | 75 > 27
            v[j] = v[j-gap]; //  v[5] = v[1]
            j =j- gap; // j = 1
        }
        v[j] = temp; //v[j] = 99 | v[1] = 27
    }
    }
   
    
}

int main() {
    int numeros[] = {65,75,6,57,99,27,0,96};
    ShellSort(numeros, 8);
    for(int w = 0; w < 8; w++){
        printf("%d\n", numeros[w]);
    }
}
