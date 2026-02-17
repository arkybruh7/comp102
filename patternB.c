#include <stdio.h>
int main()
{
    int i, j, k, space;
    for (i = 1; i <= 4; i++)
    {
        for (space = 4 - i; space > 0; space--)
        {
            printf("\t");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d\t", j);
        }
        for (k = i - 1; k >= 1; k--)
        {
            printf("%d\t", k);
        }
        printf("\n");
    }
}

//             1
//         1   2   1
//     1   2   3   2   1
// 1   2   3   4   3   2   1