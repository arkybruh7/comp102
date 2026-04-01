#include <stdio.h>
#include <math.h>

void fibonacci(int num)
{
    int c, i;
    int a = 0;
    int b = 1;
    printf("%d", a);
    printf("%d", b);
    for (i = 2; i < num; i++)
    {
        c = a + b;
        printf("%d  ", c);
        a = b;
        b = c;
    }
}

void perfect(int num)
{
    int i, sum = 0;
    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        printf("Perfect num");
    }
    else
    {
        printf("Not perfect");
    }
}

void dudeney(int num)
{
    int rem, sum = 0;
    int quo = num;
    while (quo != 0)
    {
        rem = quo % 10;
        sum += rem;
        quo = quo / 10;
    }
    sum = (int)pow(sum, 3);
    if (num == sum)
    {
        printf("Number is dudeney");
    }
    else
    {
        printf("Not Dudeney");
    }
}

int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    int i, fact = 1;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return (fact);
}

void strong(int num)
{
    int quo = num, rem, sum = 0;
    while (quo != 0)
    {
        rem = quo % 10;
        sum += factorial(rem);
        quo = quo / 10;
    }
    if (sum == num)
    {
        printf("Number is strong");
    }
    else
    {
        printf("Not strong number");
    }
}

int main()
{
    int i, num, ch;
    printf("Enter Number Of terms or Number To check\t");
    scanf("%d", &num);
    printf("Choose an option:\n 1.Fibonacci \n 2.perfect \n 3.Dudeney \n 4.Strong \n 5.Factorial \n 6.exit");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        fibonacci(num);
        break;
    case 2:
        perfect(num);
        break;
    case 3:
        dudeney(num);
        break;
    case 4:
        strong(num);
        break;
    case 5:
        printf("factorial is %d ", factorial(num));
        break;
    case 6:
        return 0;
        break;
    default:
        printf("Invalid Option!");
        return 0;
    }
}