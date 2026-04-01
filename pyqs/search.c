#include <stdio.h>
int main()
{
    int arr[30], n, i, s;
    printf("Enter No of data: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("What do you wanna search?");
    scanf("%d", &s);
    for (i = n - 1; i >= 0; i--)
    {
        if (arr[i] == s)
        {
            printf("Element at %d", i);
            break;
        }
    }
    return 0;
}
