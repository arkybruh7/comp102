#include <stdio.h>
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int main()
{
    int a, b;
    printf("Enter Two numbers: \t");
    scanf("%d %d", &a, &b);
    printf("%d", gcd(a, b));
}