#include <stdio.h>

int main (void)
{
    printf("+---------------------------------------------------------------------+\n");
    printf("|     Type       |  Byte(s) |                 |                       |\n");
    printf("|                \\of memory/               Min|                    Max|\n");
    printf("|                 \\   /                       |                       |\n");
    printf("+------------------+-+------------------------+-----------------------+\n");
    printf("|              char|1|                    -128|                    127|\n");
    printf("|     unsigned char|1|                       0|                    255|\n");
    printf("|             short|2|                  -32768|                  32767|\n");
    printf("|    unsigned short|2|                       0|                  65535|\n");
    printf("|              long|4|              2147483648|             2147483647|\n");
    printf("|     unsigned long|4|                       0|             4294967295|\n");
    printf("|         long long|8|    -9223372036854775808|    9223372036854775807|\n");
    printf("|unsigned long long|8|                       0|   18446744073709551615|\n");
    printf("|      float       |4|          -3,4028235E+38|          3,4028235E+38|\n");
    printf("|     double       |8|-1,7976931348623157E+308|1,7976931348623157E+308|\n");
    return 0;
}
