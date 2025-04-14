#include <stdio.h>
int main()
{
    int arr[5];
    printf("Enter the array : \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The elements of array are :\n");
    for (int j = 0; j < 5; j++)
    {   
        printf( "%d",arr[j]);
    }
 }

