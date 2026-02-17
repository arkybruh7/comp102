#include <stdio.h>
void perfect(int num)
{
    int i, sum = 0;
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        printf("The Number is perfect");
    }
    else
    {
        printf("The number isnt perfect");
    }
}
int main()
{
    int num;
    printf("Enter any number : \t");
    scanf("%d", &num);
    perfect(num);
    return 0;
}