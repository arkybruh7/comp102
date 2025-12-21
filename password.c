//write a program using do wile loop that allows a user up to three attempts to enter the correct password "CE@123"
#include <stdio.h>
#include <string.h>
int main()
{
    char password[20], key[10] = "CE@123";
    int value, count= 0;

    do
    {
    printf("Enter the password: \t");
    scanf("%s", password);
    value = strcmp(password, key);
    if(value==0)
    {
        printf("Correct Password!");
        break;
    }
    else
    {
        count+=1;
        printf("Access Denied! \n");
    }
  
    } 
    while (count<3);
    return 0;
}