#include <stdio.h>
#define ALPHABET 26

int main(void)
{
FILE *f_in = fopen("input.txt", "r");
FILE *f_out = fopen("output.txt", "w");
char str[1002];
int odd=0;
int a[ALPHABET] = {0};
    fgets(str, 1002, f_in);
    for(int i=0; str[i] != '\n' && str[i]; ++i)
        a[str[i] - 'a']++;
    for(int i = 0; i < ALPHABET; ++i)
        if (a[i] % 2 != 0)
        {
            odd = i;
            break;
        }
    for(int i = 0; i < ALPHABET; ++i)
        if (a[i] > 0)
            for (int j = 0; j < a[i]/2; ++j)
                fprintf(f_out, "%c", i + 'a');
    fprintf(f_out, "%c", odd + 'a');
    for(int i = ALPHABET-1; i >= 0; --i)
        if (a[i] > 0)
            for (int j = 0; j < a[i]/2; ++j)
                fprintf(f_out, "%c", i + 'a');
    fclose(f_in);
    fclose(f_out);
    return 0;
}
