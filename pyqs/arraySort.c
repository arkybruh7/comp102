#include <stdio.h>
void sort(int arr[], int index);
int main()
{
    int arr[20], i, n;
    printf("Enter Size of Array:\t");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter Value for %d place", i + 1);
        scanf("%d", &arr[i]);
    }
    sort(arr, n);
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}

void sort(int arr[], int index)
{
    int i, j, temp;

    for (i = 0; i < index - 1; i++)
    {
        for (j = 0; j < index - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}