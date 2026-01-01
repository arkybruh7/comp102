#include<stdio.h>
int main()
{
    int mat[10][10],trans[10][10],row, col , i, j;
    printf("Enter number of row and column");
    scanf("%d %d",&row, &col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter Value For [%d][%d]",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            trans[i][j] = mat[j][i];
        }
    }
        for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d \t",trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}