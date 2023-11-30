#include <stdio.h>

void rec(int a,int b)
{
    if(a==1)
        return;
    for(;;)
    {
        if(a%b==0)
        {
            printf("%d ",b);
            rec(a/b,b);
            return;
        }
        b++;
    }
}
int main()
{
int a;
    scanf("%d",&a);
    rec(a,2);
    return 0;
}
