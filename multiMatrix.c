#include<stdio.h>
int main()
{
    int a[10][10], b[10][10] , product[10][10], sum=0;
    int i, j, k, r1, c1 ,r2, c2;

    printf("Enter Number of Row and Column of first matrix:\t");
    scanf("%d %d",&r1, &c1);

    printf("Enter Number of Row and Column of Second matrix:\t");
    scanf("%d %d",&r2, &c2);

    if(r2!=c1)
    {
        printf("Matrix Multiplication is not possible");
    }
    else{
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("\nEnter Value for First[%d][%d]:\t",i,j);
                scanf("%d",&a[i][j]);
            }
        }

        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("\nEnter Value for Second[%d][%d]:\t",i,j);
                scanf("%d",&b[i][j]);
            }
        }

        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                sum=0;
                for(k=0;k<c1;k++)
                {
                    sum+= a[i][k]*b[k][j];
                }
                product[i][j]=sum;
            }
        }
        
        
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",product[i][j]);
            }
            printf("\n");
        }
}
    return 0;
}

