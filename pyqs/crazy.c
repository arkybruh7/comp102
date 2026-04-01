#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[30];
    int i;
    printf("Enter any string");
    scanf("%s", str);
    for (i = 0; i < strlen(str); i++)
    {
        if (isupper(str[i]))
        {
            str[i] = '&';
        }
        if (islower(str[i]))
        {
            str[i] = '#';
        }
    }
    printf("The string is %s", str);
    return 0;
}