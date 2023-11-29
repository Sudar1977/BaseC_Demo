#include <stdio.h>
int main()
{
int a, b, max, min;
 scanf("%d%d", &a, &b);
//можно и в одну строку кода!
 printf("%d %d", a < b ? a : b, a > b ? a : b);
 return 0;
}
