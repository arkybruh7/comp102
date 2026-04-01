#include <stdio.h>
#include <math.h>
int main()
{
    int x, n, sum = 0;
    printf("Enter value of x and n");
    scanf("%d %d", &x, &n);
    for (int i = 1; i <= (2 * n - 1); i = i + 2)
    {
        sum += pow(x, i);
    }
    printf("The sum is %d", sum);
    return 0;
}