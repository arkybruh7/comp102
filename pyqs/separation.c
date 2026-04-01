#include <stdio.h>
int add(int num)
{
    int rem, sum = 0;
    while (num != 0)
    {
        rem = num % 10;
        sum += rem;
        num = num / 10;
    }
    return sum;
}
int main()
{
    int n, rem, sum = 0, result;
    printf("Enter any number");
    scanf("%d", &n);
    result = add(n);
    while (result >= 10)
    {
        result = add(result);
    }
    printf("the sum is %d", result);
}