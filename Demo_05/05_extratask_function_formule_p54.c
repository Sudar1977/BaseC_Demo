#include <stdio.h>

int f(int x)
{
int res = 0;
    if ((x >= -2) && (x < 2))
        res = x * x;
    if (x >= 2)
        res = x*x+4*x+5;
    if (x < -2)
        res = 4;
    return res;
}

int main(void)
{
int a=1, b, max = 0;
    while (a != 0)
    {
        scanf("%d", &a);
        b = f(a);
    if (b > max)
        max = b;
    }
    printf("%d ", max);
    return 0;
}
