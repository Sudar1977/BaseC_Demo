#include <stdio.h>

int is_prime(int n, int divider)
{
    if (n == divider)
        return 1;
    if ((n > 1) && (n % divider != 0))
        return is_prime(n, divider + 1);
    else
        return 0;
}

int main()
{
int n;
    scanf("%d", &n);
    is_prime(n, 2) ? printf("YES") : printf("NO");
    return 0;
}
