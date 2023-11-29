#include <stdio.h>
#include <limits.h>//пределы для целых типов
#include <float.h>//пределы для вещественных типов
int main(void)
{
    printf("+---------------------------------------------------------------------+\n");
    printf("|       Type     |  Byte(s) |                 |                       |\n");
    printf("|                \\of memory/               Min|                    Max|\n");
    printf("|                 \\      /                    |                       |\n");
    printf("+------------------+-+------------------------+-----------------------+\n");
    printf("|%18s|%d|%24d|%23d|\n","char",sizeof(char),CHAR_MIN,CHAR_MAX);
    printf("|%18s|%d|%24d|%23d|\n","unsigned char",sizeof(unsigned char),0,UCHAR_MAX);
    return 0;
}
