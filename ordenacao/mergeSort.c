#include <stdio.h>
#include <stdlib.h>


void merge(int p, int q, int r, int v[]){
   int *w; 
   w = malloc ((r-p) * sizeof (int));
   int i = p, j = q;
   int k = 0;

   while (i < q && j < r) { 
      if (v[i] <= v[j])  w[k++] = v[i++];
      else  w[k++] = v[j++];
   }
   while (i < q)  w[k++] = v[i++];
   while (j < r)  w[k++] = v[j++];
   for (i = p; i < r; ++i)  v[i] = w[i-p];
   free (w);
}



void MergeSort(int p, int r, int v[]){
    if(p<r-1){
        int q = (p+r)/2;
        MergeSort(p, q, v);
        MergeSort(q, r, v);
        merge(p, q, r, v);
    }
}


int main() {
    int numeros[] = {65,75,6,57,99,27,0,96};
   MergeSort(65,96, numeros);
   
}
