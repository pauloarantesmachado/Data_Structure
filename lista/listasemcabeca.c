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
void printList (cel *lst){
    if(lst!= NULL){
        printf("%d\n", lst -> numero);
        printList(lst->seg);
    }
}


int main(int argc, char const *argv[])
{
    cel * lst;
    lst = malloc(sizeof(cel));
    lst = NULL;
    lst =insere(lst,20);
    lst =insere(lst,30);
    printList(lst);
    return 0;
}




