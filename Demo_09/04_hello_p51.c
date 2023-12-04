#include <stdio.h>
#include <string.h>

const int line_width = 128;

int main(void)
{
char * input_fn = "input.txt";
char * output_fn = "output.txt";
char line[line_width];
char fio[3][line_width];
FILE *fp;
int count = 0;
    fp = fopen(input_fn, "r");
    while (fscanf(fp, "%s", line) == 1)
        strcpy(fio[count++], line);
    fclose(fp);
    fp = fopen(output_fn, "w");
    fprintf(fp, "Hello, %s %s!", fio[1], fio[0]);
    fclose(fp);
    return 0;
}
