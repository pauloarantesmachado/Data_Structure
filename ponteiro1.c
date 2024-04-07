#include <stdio.h>

struct phone
{
    char name[15];
    char ddd[2];
    char num[10];
};
struct phone *ptr;

int main(){
    struct phone paulo = {"Paulo ar Silva", "99", "123-456"};
    ptr = &paulo;
    printf("%s", ptr->name);
    return 0;
    
}

