#include<stdio.h>
int main()
{
    float marks[7], percentage,sum=0;
    int i;
    for(i=0;i<7;i++)
    {
        printf("Enter marks in subject %d : \t", i+1);
        scanf("%f",&marks[i]);
        sum += marks[i];
        
    }
    percentage = sum /7;
    printf("Your percentage is %0.2f \n ",percentage);
    if(percentage>= 80)
    {
        printf("A");
    }
    else if(percentage>=70)
    {
        printf("B");
    }
    else if(percentage>=40)
    {
        printf("C");
    }
    else
    {
        printf("Better drop out gng");
    }
    return 0;
}