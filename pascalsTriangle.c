#include <stdio.h>
int main()
{
    int i, j, k, space, coef;
    for (i = 0; i < 10; i++)
    {
        coef = 1;
        for (space = 0; space < 10 - i; space++)
        {
            printf("    ");
        }
        for (k = 0; k <= i; k++)
        {
            printf("%8d", coef);
            coef = (coef * (i - k)) / (k + 1);
        }
        printf("\n");
    }
}

//             1
//         1       1
//      1      2      1
//    1     3      3     1
// 1     4     6      4     1
