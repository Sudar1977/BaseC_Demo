#include <stdio.h>
#include <string.h>

const int line_width = 1024;

int is_palindrome(char * line)
{
int len = strlen(line);
    for (int i = 0; i < len / 2; i++)
        if (line[i] != line[len - i - 1])
            return 0;
    return 1;
}

int main(void)
{
char * input_fn = "input.txt";
char * output_fn = "output.txt";
char line[line_width];
FILE *fp;
    fp = fopen(input_fn, "r");
    fscanf(fp, "%[^\n]", line);
    fclose(fp);
    fp = fopen(output_fn, "w");
    fprintf(fp, "%s", is_palindrome(line) ? "YES" : "NO");
    fclose(fp);
    return 0;
}
