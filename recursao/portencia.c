#include <stdio.h>

int main() {
    int value = potencia(5,3);
    printf("%d\n",value);
}
int potencia(int a, int b){
   if(b==0) 
      return 1;
   int mult =potencia(a, b-1);
   mult  = mult * a;
   return mult;
   
}

