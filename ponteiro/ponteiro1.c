#include <stdio.h>
/*
*ptr: o conteudo do ponteiro apontado pelo mesmo
ptr : o endereço da variável
&ptr: é o endereço do ponteiro
*/
int main(){
    int numero = 15;
    int *ptr;
    ptr = &numero;

    printf("numero é igual a:%d\n",numero);
    printf("o endereço é igual a:%p\n",&numero);
    printf("o conteudo do ponteiro é igual a:%d\n",*ptr);
    printf("o endereço apontado do ponteiro é igual a:%p\n",ptr);
    printf("o endereço do ponteiro é igual a:%p\n",&ptr);


}