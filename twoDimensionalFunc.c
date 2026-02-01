#include<stdio.h>

void transpose(int matrix[][10], int transpose[][10],int row , int column)
{
    int i , j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
}

int main()
{
    int matrix[10][10],transposed[10][10], row, column, i , j ;
    printf("enter number of row and column");
    scanf("%d %d", &row , &column);
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("Enter value for [%d][%d]\t:", i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
    for(j=0;j<column;j++)
        {
            printf("%d\t",  matrix[i][j]);
        }
        printf("\n");
    }   
    printf("\n");
    transpose(matrix, transposed, row, column);
    for(i=0;i<column;i++)
    {
    for(j=0;j<row;j++)
        {
            printf("%d\t",  transposed[i][j]);
        }
        printf("\n");
    }
    return 0;
}