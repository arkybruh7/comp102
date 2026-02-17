#include <stdio.h>
void gcd(int num1, int num2)
{
    int rem, gcd, temp;
    if (num2 > num1)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    rem = num1;
    while (rem != 0)
    {
        rem = rem % num2;
        if (rem != 0)
        {
            gcd = rem;
        }
    }
    printf("The GGD is %d", gcd);
}
int main()
{
    int num1, num2;
    printf("Enter two numbers:\t");
    scanf("%d %d", &num1, &num2);
    gcd(num1, num2);
    return 0;
}
// divide bigger number by smaller
