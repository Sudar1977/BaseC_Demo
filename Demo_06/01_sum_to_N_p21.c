#include <stdio.h>
int recur(int n)
{
    return (n == 1) ? 1 : n + recur(n - 1);
}
int main()
{
int n;
    scanf("%d",&n);
    printf("%d", recur(n));
    return 0;
}
