#include <stdio.h>

int add(int a[][20], int b[][20], int c[][20], int row, int col)
{
    int i, j;
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            c[i][j] = a[i][j] + b[i][j];
    return 0; // dummy return
}

int main()
{
    int a[20][20], b[20][20], c[20][20];
    int row, col, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf("%d", &b[i][j]);

    add(a, b, c, row, col);

    printf("\nResultant Matrix:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }

    return 0;
}
