#include <stdio.h>
int transpose(int matA[][5], int trans[][5])
{
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            trans[i][j] = matA[j][i];
        }
    }
}
int main()
{
    int matA[5][5], trans[5][5], i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter Value for Matrix [%d][%d]:\t", i + 1, j + 1);
            scanf("%d", &matA[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", matA[i][j]);
        }
        printf("\n");
    }

    transpose(matA, trans);

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}