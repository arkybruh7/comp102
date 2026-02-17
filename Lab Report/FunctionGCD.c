#include <stdio.h>
void gcd(int num1, int num2)
{
    int i = 1, temp, gcd;
    if (num2 < num1)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    for (i = 1; i <= num1; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    printf("The GCD of numbers is %d", gcd);
}

int main()
{
    int num1, num2;
    printf("Enter two numbers:\t");
    scanf("%d %d", &num1, &num2);
    gcd(num1, num2);
    return 0;
}