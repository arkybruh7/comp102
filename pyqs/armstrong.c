#include <stdio.h>
#include <math.h>
int main()
{
    int n, count = 0, rem;
    double sum = 0;
    printf("Enter Any Number:");
    scanf("%d", &n);
    int num = n;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    n = num;
    while (n != 0)
    {
        rem = n % 10;
        sum += pow(rem, count);
        n = n / 10;
    }
    n = num;
    if (n == sum)
    {
        printf("armstrong");
    }
    else
    {
        printf("Not armstrong");
    }
    return 0;
}