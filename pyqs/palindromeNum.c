#include <stdio.h>
int main()
{
    int num, rem, rev = 0, quo;
    printf("Enter any number:\t");
    scanf("%d", &num);
    quo = num;
    while (quo != 0)
    {
        rem = quo % 10;
        rev = rev * 10 + rem;
        quo = quo / 10;
    }
    if (num == rev)
    {
        printf("%d is palindrome", num);
    }
    else
    {
        printf("Number not palindrome");
    }
    return 0;
}