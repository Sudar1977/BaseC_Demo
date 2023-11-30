#include <stdio.h>

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

void bubble_sort(int* arr, int size)
{
int buf;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                buf = arr[i];
                arr[i] = arr[j];
                arr[j] = buf;
            }
        }
    }
}

void PrintNoSpace(int *arr, int len)
{
    for (int i = 0; i < len; i++)
        printf("%d",arr[i]);;
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
int n;
int arr[255];
    scanf("%d", &n);
int size = Digits(n,arr);
    bubble_sort(arr, size);
    reverseArray(arr,size);
    PrintNoSpace(arr,size);
    return 0;
}
