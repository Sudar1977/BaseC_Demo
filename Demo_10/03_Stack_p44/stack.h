typedef int datatype;

typedef struct list
{
    datatype value;
    struct list * next;
}stack;

void push(stack **p,datatype data);
datatype pop(stack **p);
