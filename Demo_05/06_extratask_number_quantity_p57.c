#include <stdio.h>

char is_digit(char a)
{
    return a >= '0' && a <= '9';
}

int main()
{
int count = 0;
char input;
    while (1)
    {
        scanf("%c", &input);
        if (input == '.')
            break;
        if (is_digit(input))
            count++;
    }
    printf("%d", count);
    return 0;
}
