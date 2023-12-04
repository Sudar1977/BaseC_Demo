#include <stdio.h>

void print_sequence(int n, int k)
{
    for (int i = 1; i <= k; i++)
    {
        printf("%d ", k);
        n--;
        if (n == 0)
            return;
    }
    print_sequence(n, k + 1);
}

int main()
{
int n;
    scanf("%d", &n);
    print_sequence(n, 1);
    return 0;
}
