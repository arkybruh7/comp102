#include <stdio.h>
#include <math.h>
int reverse(int num)
{
    int i, rem = 0, quo, count = 0, rev = 0;
    quo = num;
    while (quo != 0)
    {
        rem = quo % 10;
        quo = quo / 10;
        count++;
    }
    quo = num;
    rem = 0;
    count = count - 1;
    while (quo != 0)
    {
        rem = quo % 10;
        quo = quo / 10;
        rev += rem * pow(10, count);
        count--;
    }
    return rev;
}
int main()
{
    int num;
    printf("Enter Any Number");
    scanf("%d", &num);
    printf("The reverse is %d", reverse(num));
    return 0;
}