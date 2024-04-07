
#include <stdio.h>
int main() {
	int size = 3;
	int numeros[3] = {4,2,5};
	
	
	printf("Maior número %d",Max(numeros, size));

	return 0;


}
int Max (int v[], int n) {
	   int j, x = v[0];
	   for (j = 1; j < n; j++)
	     if (x < v[j]) x = v[j];
	   return x;  
    }

