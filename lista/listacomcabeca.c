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

void printList (Cel *lst){
    if(lst ->seg!= NULL){
        printf("%d\n", lst ->seg->numero);
        printList(lst->seg);
    }
}

void delete(Cel *lst){
    Cel* remove;
    remove = lst ->seg;
    lst ->seg = remove ->seg;
    free(remove);
}

Cel* search(Cel* lst, int y){
    Cel* p;
    p = lst;
    while (p!=NULL && p->numero != y)
    {
        p = p ->seg;
    }
    return p;
    
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
    
    printList(cabeca);

    delete(cabeca);

    Cel* p = search(cabeca, 10);
    printf(" this is o number %d\n", p ->numero);
    printList(cabeca);
}





