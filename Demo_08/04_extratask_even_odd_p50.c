#include <stdio.h>

const int input_size = 10;

int get_digits_mul(int a_n)
{
int res = 1;
int d;
int n = a_n;
    while (n > 0)
    {
        d = n % 10;
        if (((a_n % 2 == 0) && (d % 2 == 0)) || ((a_n % 2 == 1) && (d % 2 == 1)))
        res *= d;
        n /= 10;
    }
    return res;
}

int main()
{
int m[input_size];
int odd = 0;
int even = 0;
    for (int i = 0; i < input_size; i++)
    {
        scanf("%d", m + i);
        (m[i] % 2 == 0) ? even++ : odd++;
    }
    for (int i = 0; i < input_size; i++)
    {
        if ((even > odd) && (m[i] % 2 == 1) || (even <= odd) && (m[i] % 2 == 0))
            m[i] = get_digits_mul(m[i]);
        printf("%d ", m[i]);
    }
    return 0;
}
