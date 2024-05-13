#include <stdio.h>
#include <stdlib.h>

struct cel{
    int numero;
    struct cel *seg;
};
typedef struct cel Cel;

void insere(int y, Cel**es, Cel **et){
    Cel *novo;
    novo = malloc(sizeof(Cel));
    novo ->numero = y;
    novo ->seg= NULL;
    if(*et == NULL){
        *et = *es = novo;
    }
    else{
        (*et) ->seg= novo;
        *et = novo;
    }
}

void printFila(Cel *lst){
    if(lst!= NULL){
        printf("%d\n", lst ->numero);
        printFila(lst->seg);
    }
}
void removeOPrimeiro(Cel **es, Cel **et){
   int x;
   Cel * removido;
   removido = *es;
   x = removido->numero;
   *es = removido->seg;
   free (removido);
   if (*es==NULL) *et = NULL;
}

int main() {
    Cel *ini, *final;
	ini = malloc(sizeof(Cel));
    final = malloc(sizeof(Cel));
    ini, final  = NULL;
    insere( 30, &ini, &final);
    insere( 20, &ini, &final);
    insere( 10, &ini, &final);
    removeOPrimeiro(&ini, &final);
    removeOPrimeiro(&ini, &final);
    printFila(ini);
}





