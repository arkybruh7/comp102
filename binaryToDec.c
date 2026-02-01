#include<stdio.h>
#include<math.h>
int main()
{
    int binary;
    int rem , decimal=0 ,index = 0,quo;
    printf("Enter Value in Binary\t:");
    scanf("%d",&binary);
    quo = binary;
    while(quo!=0)
    {
        rem = quo%10;
        quo = quo/10;
        decimal+= rem * pow(2, index) ;
        index ++;
    }
    printf("%d", decimal);
    return 0;
}