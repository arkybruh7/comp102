// tranpose through double pointer

#include <stdio.h>
#include <stdlib.h>
void transpose(int **ptr1, int **ptr2)
{
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            ptr2[i][j] = ptr1[j][i];
        }
    }
}
int main()
{
    int **ptr1, **ptr2, i, j;
    ptr1 = (int **)malloc(2 * sizeof(int *));
    for (i = 0; i < 2; i++)
    {
        ptr1[i] = (int *)malloc(2 * sizeof(int));
    }

    ptr2 = (int **)malloc(2 * sizeof(int *));
    for (i = 0; i < 2; i++)
    {
        ptr2[i] = (int *)malloc(2 * sizeof(int));
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", (*(ptr1 + i) + j));
        }
    }
    transpose(ptr1, ptr2);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", *(*(ptr2 + i) + j));
        }
        printf("\n");
    }

    for (i = 0; i < 2; i++)
    {
        free(ptr1[i]);
        free(ptr2[i]);
    }
}