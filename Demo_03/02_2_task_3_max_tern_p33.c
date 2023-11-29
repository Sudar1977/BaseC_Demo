#include <stdio.h>
int main()
{
int a, b, max, min;
 scanf("%d%d", &a, &b);
 max = a > b ? a : b;//всего две строки кода!
 min = a < b ? a : b;//всего две строки кода!
 printf("%d %d",max,min);
 return 0;
}
