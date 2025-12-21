#include <stdio.h>
#include<ctype.h>
int main()
{
    char c[100], letter;
    int i, word , vowel , characters, w ;
    printf("Enter any Sentence ");
    gets(c);

    for(i=0;i=!"\0";i++)
    {
        letter = toupper(c[i]);
        if(letter==' ')
        {
            word+=1;
        }
        else if(letter=='A'|| letter=='E'|| letter=='I'|| letter=='O'|| letter=='U')
        {
            vowel+=1;
        }

    }
    characters = i- word;
    w= word + 1;
    printf("NUMBER OF WORDS IS %d", w );
    printf("Number of vowels is %d", vowel);
    printf("Number of characters is %d", characters);
    return 0;
}