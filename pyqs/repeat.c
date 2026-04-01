#include <stdio.h>
int main()
{
    int arr[10], i, j, count = 0;
    printf("Enter ten numbers:\t");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        count = 0;
        for (j = 0; j < 10; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > 1)
        {
            printf("%d is repeated", arr[i]);
        }
    }
    return 0;
}