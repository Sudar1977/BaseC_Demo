#include <stdio.h>
#include <limits.h>

int main()
{
int max1 = 0, max2 = 1;
int arr[10];
    scanf("%d", &arr[0]);
    for(int i = 1; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > arr[max1])
        {
            max2 = max1;
            max1 = i;
        }
        else if (arr[i] > arr[max2])
            max2 = i;
    }
    printf("%d\n",arr[max1]+arr[max2]);
    return 0;
}
