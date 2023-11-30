#include <stdio.h>

void PrintDigist(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        if (arr[i] > 0)
            printf("%d %d ", i, arr[i]);
}
void count_digits(char n[], int* res)
{
//char ch;
    for (int i=0;n[i]!=0;i++)
        res[n[i] - '0']++;
}

int main()
{
enum {BUFFER_SIZE = 1000};
char buffer[BUFFER_SIZE];
int r[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    scanf("%s", buffer);
    count_digits(buffer, r);
    PrintDigist(r,10);
    return 0;
}
