#include <stdio.h>
int main()
{
    int num, rem , quo, sum=0;
    printf("Enter Any Number: \t");
    scanf("%d", &num);
    quo = num;

    do{
    rem= quo%10;
    sum += rem;
    quo = quo/10;
    }
    while(quo!=0);
    if(sum*sum*sum==num){
        printf("Its dudeney number");
    }
    else{
        printf("Not dudeney");
    }
}