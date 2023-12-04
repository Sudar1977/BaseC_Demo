#include <stdio.h>

void deviders(int n,int devider)
{
    if(n>1)
    {
        if(n%devider==0)
        {
            printf("%d ",devider);
            deviders(n/devider,devider);
        }
        else
            deviders(n,devider+1);
    }
}

int main()
{
int a;
    scanf("%d",&a);
    deviders(a,2);
    return 0;
}
