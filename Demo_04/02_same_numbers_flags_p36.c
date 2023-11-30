#include <stdio.h>
#define BASE 16 // Можно перейти в 16-ричную систему меняя основание
int main ()
{
int a, num;
int flag = 0; // Признак, что две цифры одинаковые
    for (scanf ("%x", &a); a>0 && !flag; a/= BASE) //Считываем число вначале и в каждую итерацию проверяем, что число не равно 0 и не появился флаг, в конце итерации цикла делим число на BASE
    {
        num = a%BASE; // выделяем цифру
        // Сравниваем цифру со всеми оставшимися
        for (int other_num = a/BASE; other_num > 0 && !flag; other_num /= BASE)
        {
            flag = (num==other_num %BASE) ? 1:0; // Если цифры совпали flag=1
        }
    }
    flag ? printf ("YES\n") : printf ("NO\n");
    return 0;
}
