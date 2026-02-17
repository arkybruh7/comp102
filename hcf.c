#include <stdio.h>
int main()
{
    int a, b, hcf, temp;
    printf("Enter Two numbers: \t");
    scanf("%d %d", &a, &b);
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    printf("The hcf is %d", a);
}

// gcd(a, b) = gcd(b , a mod b)