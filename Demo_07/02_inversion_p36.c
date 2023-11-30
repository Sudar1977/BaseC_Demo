#include <stdio.h>

void aPrint(int *arr, int len)
{
    for (int i = 0; i < len; i++)
        printf("%d ",arr[i]);;
}

void reverseArray(int * array, int num)
{
    for (int i=0,j = num-1;i < j;i++,j--)
    {
        int t = array[i];
        array[i] = array[j];
        array[j] = t;
    }
}

int main()
{
enum {SIZE = 12};
int array[SIZE] = {0};
    for(int i=0; i < SIZE; i++)
        scanf("%d", &array[i]);
    for(int i=0;i<3;i++)
        reverseArray(array +i*SIZE/3, SIZE/3);
    aPrint(array, SIZE);
    return 0;
}
