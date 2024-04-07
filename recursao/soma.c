#include <stdio.h>

int main() {
    int value = nesimo(6);
    printf("%d\n",value);
}

int nesimo(int x){
    if(x==1)
        return 0;
    if(x==2)
        return 1;
    int y;
    y = nesimo(x-1) + nesimo(x-2);
    return y;
    
}