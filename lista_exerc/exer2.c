#include <stdio.h>
#include <stdlib.h>
int main(){
    int c[] = {1,6,9,2,4,5,8,7,12,13,14,15};
    int n = 12;
    int value = maior(c, n -1);
    printf(" maior sequencia  é %d\n", value);
}

int maior(int v[],int n){
    int b;
    int c;

    for(int j =0; j < n;j++){
        int y,w;
        y = v[j];
        w = v[j+1];
        if(w > y)
            b++;
        else{
            if(b > c){
                c=b;
            }
            b=0;
        }
    }
    if(b < c)
        b= c;
    return b+1;
   

}