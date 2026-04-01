#include <stdio.h>
void reverse(int arr[], int n)
{
    int temp;
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int arr[30], n, temp;
    printf("Enter size of array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    reverse(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d    ", arr[i]);
    }
}