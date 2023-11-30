#include <stdio.h>

int power (int n, int p)
{
int res = 1;
    for (int i = 1; i <= p; i++)
        res *= n;
    return res;
}

int main (void)
{
int x,y;
    scanf ("%d%d", &x, &y);
    printf ("%d", power(x,y));
    return 0;
}
