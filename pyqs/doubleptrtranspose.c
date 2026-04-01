#include <stdio.h>
#include <stdlib.h>
int main()
{
    int **ptr;
    int i, j;
    int n = 2;
    ptr = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
    {
        ptr[i] = (int *)malloc(2 * sizeof(int));
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter fisrsty value");
            scanf("%d", &ptr[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", ptr[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        free(ptr[i]);
    }
}