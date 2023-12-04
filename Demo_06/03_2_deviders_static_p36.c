#include <stdio.h>

void deviders(int n)
{
static int devider=2;
    if(n>1)
    {
        if(n%devider==0)
        {
            printf("%d ",devider);
            deviders(n/devider);
        }
        else
        {
            devider++;
            deviders(n);
        }
    }
}

int main()
{
int a;
    scanf("%d",&a);
    deviders(a);
    return 0;
}
