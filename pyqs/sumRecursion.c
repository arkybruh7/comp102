#include <stdio.h>
int sum(int num);
int main()
{
    int num;
    printf("Enter Any Number");
    scanf("%d", &num);
    printf("Sum of digits is %d", sum(num));
    return 0;
}

int sum(int num)
{
    static int total;
    total += num % 10;
    num = num / 10;
    if (num == 0)
    {
        return total;
    }
    return sum(num);
}