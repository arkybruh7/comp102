#include <stdio.h>
#include <math.h>
int main()
{
    int num, rem , quo,  count=0;
    double sum=0; 
    printf("Enter Any Number: \t");
    scanf("%d", &num);
    quo = num;
  do{
    rem= quo%10;
    quo = quo/10;
    count+=1;
    }
    while(quo!=0);

    quo=num;
    rem=0;
    
    do{
    rem= quo%10;
    sum += pow(rem, count);
    quo = quo/10;
    }
    while(quo!=0);

    if(sum==num){
        printf("Its armstrong number");
    }
    else{
        printf("Not armstrong");
    }
}
// double is used because pow function returns value in double datat type