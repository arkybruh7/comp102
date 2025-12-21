#include<stdio.h>
int main()
{
    int num, count=0, i;
    printf("Enter Number");
    scanf("%d",&num);
    for(i=1;i<=num; i++)
    {
        if(num == 1 || num ==0)
        {
            printf("Neither prime Nor Copmposite");
            break;
        }
        if(num%i == 0)
        {
            count+=1;
        }
    }
    if(count== 2)
    {
        printf("%d is an Prime Number", num);
    }
    else{
        printf("%d is composite number", num);
    }
    return 0;
}