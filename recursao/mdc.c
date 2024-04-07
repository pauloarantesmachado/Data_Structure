#include <stdio.h>

int main()
{
   int value = mdc(12,14);
   printf("%d", value);
}

int mdc(int x, int y){
    if(x==0)
        return y;
    if(y==0)
        return x;
    int z;
    if(x>y)
    {
        z = mdc(y, x%y);
    }
    else{
        z = mdc(x, y%x);
    }
    return z;
}