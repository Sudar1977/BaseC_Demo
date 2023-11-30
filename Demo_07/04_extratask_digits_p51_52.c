#include <stdio.h>
#define MAX 100

void Print(int *arr, int len)
{
    for (int i = 0; i < len; i++)
        printf("%d ",arr[i]);;
}

int Digits(int N,int out[])
{
int i = 0;
int j, r;
    while (N != 0)
    {
        r = N % 10;
        out[i] = r;
        i++;
        N = N / 10;
    }
    return i;
}

void reverseArray(int * array, int num)
{
    for ( int i = 0, j = num - 1; i < j; i++, j--)
    {
        int t = array[i];
        array[i] = array[j];
        array[j] = t;
    }
}

int main()
{
int N ;
int DigitsArr[MAX];
    scanf("%d",&N);
int count = Digits(N,DigitsArr);
    reverseArray(DigitsArr,count);
    Print(DigitsArr,count);
    return 0;
}
