#include <stdio.h>
#include <math.h>

int todecimal(int bits[20], int n)
{
    int decimal = 0, i;
    for (i = 0; i < n; i++)
    {
        decimal += bits[i] * pow(2, n - i - 1);
    }
    return decimal;
}

int main()
{
    int bits[20], n, i, decimal;

    printf("Enter number of bits: ");
    scanf("%d", &n);

    printf("Enter binary digits:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &bits[i]);
    }

    decimal = todecimal(bits, n);

    printf("Decimal equivalent = %d", decimal);

    return 0;
}
