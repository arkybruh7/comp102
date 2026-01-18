#include <stdio.h>
void sort(int num[],int index);
int main()
{
    int num[9] = {5, 6, 3, 2, 4, 9, 7, 8, 1};
    int i;
    sort(num,9);
    for (i = 0; i < 9; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}

void sort(int num[], int index)
{
int i, j, temp;

    for (i = 0; i < index; i++)                                     
    {
        for (j = i + 1; j < index-1; j++)
        {
            if (num[i] < num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

}