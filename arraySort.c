#include <stdio.h>

int main()
{
    int num[10] = {5, 6, 3, 2, 4, 0, 9, 7, 8, 1};
    int i, j, temp;

    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (num[i] > num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}
