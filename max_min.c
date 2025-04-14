#include <stdio.h>
int main()
{
    int arr[5], i, max, min;
    printf("Enter the arr element : \n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];  
    for (int j = 0; j < 5; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
        }
        else
        {
            min = arr[j];
        }
    }
    printf("Maximum value is %d \n", max);
    printf("Minimum value is %d \n", min);

    return 0;
}