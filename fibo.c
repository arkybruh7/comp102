#include <stdio.h>
int main()
{
    int a = 0, b = 1, c = 0, count = 2;
    printf("%d", a);
    printf("\t%d", b);
    do
    {
        c = a + b;
        a = b;
        b = c;
        printf("\t%d", c);
        count++;
    } while (count < 10);
}