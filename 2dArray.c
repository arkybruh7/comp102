#include<stdio.h>
int main()
{
    int num[10][10];
    int x , y,i,j;
    printf("Enter no of rows and columns: \t");
    scanf("%d %d",&x,&y);
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("\nEnter Value for array[%d][%d]:\t",i,j);
            scanf("%d",&num[i][j]);
        }
    }
        for(i=0;i<x;i++)
    {
        printf("| ");
        for(j=0;j<y;j++)
        {
            
            printf("%d\t",num[i][j]);
        }
        printf(" |\n");
    }
    return 0;
}