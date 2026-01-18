#include<stdio.h>
#include<ctype.h>
int total_cash= 100000;
int main();
void add_cash()
{
    int passcode = 1234, entered_code,added_money;
    char choice;
    do{
    printf("Enter Your Passcode :\t");
    scanf("%d",&entered_code);
    if(entered_code == passcode)
    {
        printf("How much Money you want to add? :\t");
        scanf("%d",&added_money);
        total_cash += added_money;
    }
        else{
        printf("Incorrect Pin");
    }
        printf("Do you want to continue (Y/N)? ");
        scanf(" %c", &choice);
        choice = toupper(choice);
        } 
        while(choice== 'Y');
        main();
}
void withdraw()
{
    int passcode = 4567, entered_code,withdrawn_money;
    char choice;
    do{
    printf("Enter Your Passcode :\t");
    scanf("%d",&entered_code);
    if(entered_code == passcode)
    {
        printf("How much Money you want to Withdraw? :\t");
        scanf("%d",&withdrawn_money);
        if(total_cash<withdrawn_money)
        {
            printf("Not Enough Cash");
        }
        else
        {
        total_cash -= withdrawn_money;
        }
    } 
    else{
        printf("Incorrect Pin");
    }
        printf("Do you want to continue (Y/N)? ");
        scanf(" %c", &choice);
        choice = toupper(choice);
        } 
        while(choice== 'Y');
        main();
}
void changePin()
{
    int init;
    printf("Which Pin do you want to change?(Employee-1 Customer-2) :\t");
    scanf("%d",&init);
    if(init == 1)
    {

}
    else{
        printf("Incorrect Pin");
    }
}
int main()
{
    int init;
    printf("What Do you wanna do (Employee-1 User-2):\t");
    scanf("%d",&init);
    if(init==1)
    {
        add_cash();
    }
    else
    {
    withdraw();
    }
    return 0;
}