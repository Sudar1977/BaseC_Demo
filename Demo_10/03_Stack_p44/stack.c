#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void push(stack **p,datatype data)
{
    stack *ptmp;
    ptmp=malloc(sizeof(stack));
    ptmp->value=data;
    ptmp->next=*p;
    *p=ptmp;
}

_Bool empty_stack(stack *p)
{
    return p==NULL;
}

datatype pop(stack **p)
{
    stack *ptmp=*p;
    datatype c;
    if(empty_stack(*p))
        exit (1); // Попытка взять из пустого стека
    c=ptmp->value;
    *p=ptmp->next;
    free(ptmp);
    return c;
}
