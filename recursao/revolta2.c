#include <stdio.h>

main(){
    revolta(3);

}

void revolta(int n){
    if(n > 0){
        printf("%d",n);
        revolta(n-1);
        printf("%d",n);
    }
    
   

}