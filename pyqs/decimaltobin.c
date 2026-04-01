#include <stdio.h>
int main()
{
    int bin[16] = {0, 0};
    int dec, rem, i = 0;
    printf("Enter Decimal Value");
    scanf("%d", &dec);
    while (dec != 0)
    {
        rem = dec % 2;
        bin[i] = rem;
        dec = dec / 2;
        i++;
    }
    for (i = 15; i >= 0; i--)
    {
        printf("%d", bin[i]);
    }
    return 0;
}