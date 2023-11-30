#include <stdio.h>
#include <string.h> //объявление библиотеки обработки строк
#include <math.h> //объявление математической библиотеки

int Input (int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++) //ввод массива
        scanf ("%d", &arr[i]);
    return i;
}

int Max (int arr[], int len)
{
    int max = arr[0];
    for (int i = 1; i < len; i++)
        if (max < arr[i])
            max = arr[i];
    return max; //возврат результата
}

int PosMax (int *arr, int len)
//описание функции PosMax
{
int max = arr[0], i, p_M = 0;
    for (i = 1; i < len; i++)
        if (max < arr[i])
        {
            max = arr[i];
            p_M = i + 1;
        }
        return p_M; //возврат результата
}

int main (int argc, char **argv)
{
enum {BUFFER_SIZE = 10}; //указание количества элементов массива
int buffer [BUFFER_SIZE]; //объявление массива
    Input (buffer, BUFFER_SIZE); //вызов функции Input
    printf ("%d ", PosMax (buffer, BUFFER_SIZE));
//вывод в консоль
    printf ("%d ", Max (buffer, BUFFER_SIZE));
//вывод в консоль
//    printf ("%d ", PosMin (buffer, BUFFER_SIZE));
//вывод в консоль
//    printf ("%d ", Min (buffer, BUFFER_SIZE));
//вывод в консоль
    return 0; //завершить программу успешно
}
