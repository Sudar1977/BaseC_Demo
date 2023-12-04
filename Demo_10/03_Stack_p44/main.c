#include <stdlib.h>
#include "stack.h"

int main()
{
    stack *p=NULL; // Важно для корректной работы присвоить NULL
    for(int i=1;i<=5; i++)
        push(&p,i);
    for(int i=1;i<=5; i++)
        printf("%d\n",pop(&p)); // 5 4 3 2 1
    return 0;
}
