#include <stdio.h>

int Input(int arr[], int n)
{
int i;
    for(i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    return i;
}

int countZeroOne(int len,int *arr,int *out)
{
int countNumbers = 1, countOut = 0;
    if(arr[0] == 1)
        out[countOut++] = 0;
    for(int i = 0; i < len-1; i++)
    {
        if(arr[i] == arr[i + 1])
            countNumbers++;
        else
        {
            out[countOut++] = countNumbers;
            countNumbers = 1;
        }
    }
    out[countOut++] = countNumbers;
    return countOut;
}

void PrintZeroOne(int len,int* out)
{
    printf("[%d", out[0]);
    for(int i = 1; i < len; i++)
        printf(",%d", out[i]);
    printf("]");
}

int main()
{
enum {SIZE = 100};
int in[SIZE];
int out[SIZE];
    Input(in,SIZE);
int count = countZeroOne(SIZE,in,out);
    PrintZeroOne(count,out);
    return 0;
}
