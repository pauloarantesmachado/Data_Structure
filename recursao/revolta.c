#include <stdio.h>

main(){
   int v = revolta(3);

}

int revolta(int n){
   if(n == 0)
    return 0;
   printf("%d", n);
   int x;
   x = revolta(n-1);
   x+=1;
   printf("%d", x);
   return x;

}