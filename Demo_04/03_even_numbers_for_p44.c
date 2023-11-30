#include <stdio.h>
int main()
{
int a,num=0;
//в цикле начале считываем число, если оно не ноль, то выполняем тело цикла, в конце цикла считываем число
    for(scanf("%d",&a);a!=0;scanf("%d",&a))
    if(a%2==0)
        num++;
        printf("%d\n",num);
    return 0;
}
