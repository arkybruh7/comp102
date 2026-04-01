#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int i, size;
    gets(str);
    size = strlen(str);
    for (i = 0; i < size / 2; i++)
    {
        if (str[i] != str[size - i - 1])
        {
            printf("not a palindrome");
            return 0;
        }
    }
    printf("It is palindrome");
    return 0;
}