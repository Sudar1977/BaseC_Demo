#include <stdio.h>

const int word_size = 32;

const char letters[7][8] =
 {
 {'a', 'e', 'h', 'i', 'o', 'u', 'w', 'y'},
 {'b', 'f', 'p', 'v'},
 {'c', 'g', 'j', 'k', 'q', 's', 'x', 'z'},
 {'d', 't'},
 {'l'},
 {'m', 'n'},
 {'r'}
 };

int get_code_by_letter(char c)
{
    for (int i = 0; i < 7; i++)
        for (int j = 0; j < 8; j++)
            if (letters[i][j] == c)
                return i;
    return -1;
}

int main(void)
{
char * input_fn = "input.txt";
char * output_fn = "output.txt";
FILE *fp;
char result[word_size];
int count = 0;
int code;
    fp = fopen(input_fn, "r");
char c, n, p;
    while ((c = getc(fp)) != EOF)
    {
        if (!count)
        {
            result[count++] = c;
            p = c;
            continue;
        }
        code = get_code_by_letter(c);
        if (code <= 0)
            continue;
        n = '0' + code;
        if (n != p)
        {
            result[count++] = n;
            p = n;
        }
    }
    for (int i = count; i < 4; i++)
        result[i] = '0';
    result[4] = '\0';
    fclose(fp);
    fp = fopen(output_fn, "w");
    fprintf(fp, "%s", result);
    fclose(fp);
    return 0;
}
