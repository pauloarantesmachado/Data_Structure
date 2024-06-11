#include <stdio.h>
#include <stdlib.h>

             
struct cel {
 int conteudo;
 struct cel *esq;
 struct cel *dir;
};
typedef struct cel No;
typedef struct No *arvore;
arvore insere(arvore r, int n){
    No *novo;
    novo = malloc(sizeof(No));
    novo -> conteudo = n;
    No *f, *p;
    if(r == NULL){
        return novo;
    }
    f = r;
    while (f != NULL)
    {
        p = f;
        if(f ->conteudo > novo -> conteudo){
            f = f ->esq;
        }else{
            f = f -> dir;
        }    
    }
    if( p -> conteudo > novo -> conteudo){
        p ->esq = novo;
    }else{
        p ->dir = novo;
    }
    return r;
}

arvore remocao(No *r){
    No *p, *q;
    q = NULL;
    if(r -> esq == NULL){
        q = r -> dir;
    }else {
        p = r; q = r-> esq;
        while (q -> dir != NULL)
        {
            p = q;
            q = q -> dir;
        }
        if(p != r){
            p -> dir = q -> esq;
            q-> esq = r -> esq; 
        }
        q -> dir = r -> dir;
    }
    free(r);
    return q;
}

void Erd(No* r){
    if(r!=NULL){
        Erd(r->esq);
        printf("%d\n", r->conteudo);
        Erd(r->dir);
    }
}
int main() {
   No *arvore;
    arvore = malloc(sizeof(No));
    arvore = NULL;
    arvore = insere(arvore, 5);
    arvore = insere(arvore, 10);
    arvore = insere(arvore, 3);
    Erd(arvore);
    arvore = remocao(arvore);
    Erd(arvore);
}

