#include <stdio.h>
void primeNumbers(int num)
{
    int j, count = 0;
    for (j = 2; j <= num / 2; j++)
    {
        if (num % j == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("%d\t", num);
    }
    count = 0;
}
int main()
{
    int i;
    for (i = 2; i < 100; i++)
    {
        primeNumbers(i);
    }
}