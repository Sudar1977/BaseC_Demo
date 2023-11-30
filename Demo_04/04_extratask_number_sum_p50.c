#include <stdio.h>
int main(void)
{
int a,sum=0;
    scanf("%d",&a);
    do
        sum+=a%10;
    while(a/=10);
    if(sum==10)
        printf("YES");
    else
        printf("NO");
    return 0;
}
