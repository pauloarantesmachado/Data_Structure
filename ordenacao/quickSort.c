#include <stdio.h>
#include <stdlib.h>


int separa (int p, int r, int v[]) 
{
  int c, j, k, t;
  c = v[r]; j = p;
  for(k = p; k < r; k++)
    if(v[k] <= c){
      t = v[j], v[j] = v[k], v[k] = t;
      j++;
    }
  v[r] = v[j], v[j] = c;
  return j;                                    
}

void quickSort(int p, int r, int v[]){
  int j = 0;
  if(p < r){
    j = separa(p,r,v);
    quickSort(p,j-1,v);
    quickSort(j+1,r,v);
  }
}


int main() {
  int numeros[] = {65,75,6,57,99,27,0,96};
  quickSort(65,96, numeros);
}
