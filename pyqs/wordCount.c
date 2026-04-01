#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[50], letter;
    int i = 0, vowel_count = 0, word_count = 0;
    gets(str);
    while (str[i] != '\0')
    {
        letter = toupper(str[i]);
        if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
        {
            vowel_count++;
        }
        else if (letter == ' ')
        {
            word_count++;
        }
        i++;
    }
    printf("No of words %d\n", word_count + 1);
    printf("No of vowelis %d", vowel_count);
    return 0;
}