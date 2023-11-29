#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main ()
{
    printf("+---------------------------------------------------------------------+\n");
    printf("|     Type     |  Byte(s) |                   |                       |\n");
    printf("|               \\of memory/                Min|                    Max|\n");
    printf("|                 \\    /                      |                       |\n");
    printf("+------------------+-+------------------------+-----------------------+\n");
    printf("|%18s|%d|%24"PRId8"|%23"PRId8"|\n","int8_t",
    sizeof(int8_t),INT8_MIN,INT8_MAX);
    printf("|%18s|%d|%24"PRIu8"|%23"PRIu8"|\n","uint8_t",
    sizeof(uint8_t),0,UINT8_MAX);
    return 0;
}
