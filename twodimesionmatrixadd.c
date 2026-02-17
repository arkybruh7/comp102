#include <stdio.h>
int addMatrix(int matA[][10], int matB[][10], int i, int j)
{
    return matA[i][j] + matB[i][j];
}
int main()
{
    int matA[10][10], matB[10][10], matC[10][10], row, column, i, j;
    printf("Enter No of Rows and Column:\t");
    scanf("%d %d", &row, &column);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("Enter Value For [%d][%d]\t:", i + 1, j + 1);
            scanf("%d", &matA[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("Enter Value For [%d][%d]\t:", i + 1, j + 1);
            scanf("%d", &matB[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            matC[i][j] = addMatrix(matA, matB, i, j);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d\t", matC[i][j]);
        }
        printf("\n");
    }
    return 0;
}