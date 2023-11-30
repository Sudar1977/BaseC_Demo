#include <stdio.h>
#define BASE 10 // Можно перейти в 16-ричную систему меняя основание
int main ()
{
int a, other_nums, num;
    scanf ("%d", &a); // Поменять здесь на %x
    while (a>0)
    {
        num = a % BASE;
        other_nums = a / BASE;
        while (other_nums >0)
        {
            if (num == other_nums % BASE)
            {
                printf ("YES\n");
                return 0;
            }
            other_nums /= BASE;
        }
        a /= BASE;
    }
    printf ("NO\n");
    return 0;
}
