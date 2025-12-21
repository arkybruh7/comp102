#include<stdio.h>
int main()
{
    char input;
    do
    {
        printf("Enter any letter: \t");
        scanf(" %c",&input);
    } while (input!='q');
    return 0;
}