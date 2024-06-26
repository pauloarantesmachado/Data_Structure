#include <stdio.h>
#include <stdlib.h>

struct cel{
    int numero;
    struct cel *seg;
};
typedef struct cel Cel;

void insere(Cel *lst,int x){
    Cel *novo;
    novo = malloc(sizeof(Cel));
    novo ->numero = x;
    novo ->seg = lst->seg;
    lst->seg = novo; 
    
}

void printPilha(Cel *lst){
    if(lst ->seg!= NULL){
        printf("%d\n", lst ->seg->numero);
        printPilha(lst->seg);
    }
}

int delete(Cel *lst){
    Cel* remove;
    remove = lst ->seg;
    lst ->seg = remove ->seg;
    free(remove);
    return remove ->numero;
}


int size(Cel*lst){
    Cel* p;
    p = lst ->seg;
    int cont;
    while (p!=NULL)
    {
        cont +=1;
        p = p ->seg;
    }
    return cont;
}

int main() {

    Cel *cabeca;
	cabeca = malloc(sizeof(Cel));
    cabeca ->seg = NULL;
    insere(cabeca, 30);
    insere(cabeca, 20);
    insere(cabeca, 10);
    insere(cabeca, 5);
    insere(cabeca, 1);
    insere(cabeca, 0);

    int topo = delete(cabeca);
    int topo2 = delete(cabeca);
   printPilha(cabeca);
}
