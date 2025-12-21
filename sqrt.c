#include<math.h>
#include<stdio.h>
int main()
{
    int num;
    float result;
    char choice;
    do{
        printf("Enter any Number: \t");
        scanf("%d", &num);
        result= sqrt(num);
        printf("The square root of %d is %0.2f \n", num , result);
        printf("Do you want to continue\?(Y/N): \t");
        scanf(" %c", &choice);
    }while(choice=='Y'|| choice=='y');
    return 0;
    
}