
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 5; k > i; k--)
        {
            printf("\t");
        }
        for (int j = 1; j <= i; j++)
        {

            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}