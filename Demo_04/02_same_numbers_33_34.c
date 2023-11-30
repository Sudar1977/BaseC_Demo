#include <stdio.h>

int main ()
{
int a, other_nums, num;
    scanf ("%d", &a);
    while (a>0)
    {
        num = a % 10;
        other_nums = a / 10;
        while (other_nums >0)
        {
            if (num == other_nums % 10)
            {
                printf ("YES\n");
                return 0;
            }
            other_nums /= 10;
        }
        a /= 10;
    }
    printf ("NO\n");
    return 0;
}
