#include <stdio.h>
int odd(int n)
{
    if (n % 2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int arr[20], n, i, count = 0;
    printf("Enter no of inputs : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        count += odd(arr[i]);
    }
    printf("No of odd digits %d", count);
    return 0;
}