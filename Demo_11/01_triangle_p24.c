#include <stdio.h>

const int size = 1024;

int main(void)
{
char * input_fn = "input.txt";
char * output_fn = "output.txt";
FILE *fp;
char lines[size][size];
int count = 0;
    fp = fopen(input_fn, "r");
char c;
    while ((c = getc(fp)) != EOF)
        if (c == '*')
            count++;//считаем камни
        fclose(fp);
int k, row_count = 0;
    while (count > 0)//пока камни не кончатся
    {
        row_count++;//счетчик столбцов
        if (count < row_count)
            break;
        for (int j = 0; j < row_count; j++)
        {
            k = row_count - j - 1;
            for (int i = 0; i < k; i++)
                lines[j][i] = ' ';
            for (int i = 0; i < j + 1; i++)
            {
                lines[j][i * 2 + k] = '*';
                lines[j][i * 2 + k + 1] = ' ';
            }
        lines[j][j * 2 + k + 1] = '\0';
        }
    count -= row_count;
    }
    fp = fopen(output_fn, "w");
    if (!count && row_count)
        for (int i = 0; i < row_count; i++)
            fprintf(fp, (i) ? "\n%s" : "%s", lines[i]);
    else
        fprintf(fp, "%s", "NO");
    fclose(fp);
    return 0;
}
