#include <stdio.h>
int main(void)
{
int n;
 scanf ("%d", &n);
int n2 = n / 100 % 10;//В С99 можно так
int n1 = n / 10 % 10;
int n0 = n % 10;
int max = n2 > n1 ? n2 : n1;
 max = max > n0 ? max : n0;
printf("%d",max);
return 0;
}
