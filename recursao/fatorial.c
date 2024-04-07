#include <stdio.h>

int main() {
    int value = fatorial(3);
    printf("%d\n",value);
}
int fatorial(int n){
   if(n==0) 
      return 1;
   int mult =fatorial(n-1);
   mult *=n;
   return mult;
   
}

