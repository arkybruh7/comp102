#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 5; k > i; k--)
        {
            printf("\t");
        }
        for (int j = 1; j < i; j++)
        {
            printf("%d\t", j);
        }
        for (int m = i; m >= 1; m--)
        {
            printf("%d\t", m);
        }
        printf("\n");
    }
}

//                                 1
//                         1       2       1
//                 1       2       3       2       1
//         1       2       3       4       3       2       1
// 1       2       3       4       5       4       3       2       1