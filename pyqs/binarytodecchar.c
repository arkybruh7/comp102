#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char bin[16];
    int len, i;
    int sum = 0;
    gets(bin);
    len = strlen(bin);
    for (i = 0; i < 16; i++)
    {
        if (bin[i] != '0')
        {
            sum += (int)pow(2, len - i - 1);
        }
    }
    printf("decimal is %d", sum);
}