#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int v[5];
    printf("enter element ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (v[i] > v[j])
            {
                swap(&v[i], &v[j]);
            }
        }
    }
    printf("sorted array/n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ,", v[i]);
    }
    return 0;
}