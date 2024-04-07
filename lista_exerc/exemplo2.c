
#include <stdio.h>

int main() {
    int value = rec(6);
    printf("%d\n",value);
}

int rec (int x){

	if ((x == 0) || (x == 1)) return x;
		else return rec(x - 1) * x + rec(x - 2);

}