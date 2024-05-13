#include <stdio.h>
struct cel{
    int numero;
    struct cel *seg;
};
typedef struct cel cel;

cel* insere(cel*lst, int x){
  cel*novo;
  novo = malloc(sizeof(cel));
  novo->numero= x;
  novo->seg = lst;
  lst = novo;
  return lst;
}

void insereSR(cel**lst, int x){
  cel*novo;
  novo = malloc(sizeof(cel));
  novo->numero= x;
  novo ->seg = *lst;
  *lst = novo;
}
void printList (cel *lst){
    if(lst!= NULL){
        printf("%d\n", lst -> numero);
        printList(lst->seg);
    }
}

void delete(cel **lst){
    cel* remove;
    remove = *lst;
    *lst = remove ->seg;
    free(remove);
}


int main(int argc, char const *argv[])
{
    cel * lst;
    lst = malloc(sizeof(cel));
    lst = NULL;
    // lst =insere(lst,20);
    // lst =insere(lst,30);
    insereSR(&lst, 60);
    insereSR(&lst, 20);
    insereSR(&lst, 100);

    delete(&lst);
    printList(lst);
    return 0;
}




