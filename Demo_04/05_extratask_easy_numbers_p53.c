#include <stdio.h>
int main()
{
int a, i;
    scanf("%d", &a);
    for (i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            printf("NO\n");
            return 0;
        }
    }
    if(a == 1)
        printf("NO\n");
    else
        printf("YES\n");
    return 0;
}
