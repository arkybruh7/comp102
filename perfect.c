#include<stdio.h>
int main()
{
    int num, sum=0, i;
    printf("Enter any number : \t");
    scanf("%d",&num);
    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    if(num==sum)
    {
        printf("%d is perfrct number",num);
    }
    else{
        printf("%d is not a perfect number",num);
    }
    return 0;
}