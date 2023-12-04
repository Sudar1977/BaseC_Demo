#include <stdio.h>

int is_even_sum(int n)
{
int sum = 0;
    for(sum = 0; n > 0; n /= 10)
        sum += n % 10;
    return (sum % 2 == 0);
}

int main()
{
int n;
    scanf("%d", &n);
    is_even_sum(n) ? printf("YES") : printf("NO");
    return 0;
}
