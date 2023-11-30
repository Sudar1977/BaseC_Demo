#include <stdio.h>
#define SIZE 1000

int Input(int len,char arr[])
{
char input;
int count = 0;
    while (count<len)
    {
        scanf("%c", &input);
        if (input == '.')
            return count;
        arr[count++] = input;
    }
    return count;
}

void PrintSymbosCount(int len,char symbols[],int count[])
{
    for (int i = 0; i < len; i++)
        printf("%c%d", symbols[i], count[i]);
    printf("\n");
}

int CountSymbols(int len,char arr[],char symbols[],int count[])
{
int countSymbol = 1;
int outCount = 0;
int i;
    for(i = 0; i < len-1; i++)
        if(arr[i] == arr[i + 1])
            countSymbol++;
        else
        {
            symbols[outCount] = arr[i];
            count[outCount++] = countSymbol;
            countSymbol = 1;
        }
    symbols[outCount] = arr[i];
    count[outCount++] = countSymbol;
    return outCount;
}

int main()
{
char buf[SIZE],symbols[SIZE];
int count[SIZE];
int len = Input(SIZE,buf);
int lenCount = CountSymbols(len,buf,symbols,count);
    PrintSymbosCount(lenCount,symbols,count);
 return 0;
}
