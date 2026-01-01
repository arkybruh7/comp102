#include<stdio.h>
int main()
{
    int num[10]={1,2,3,4,5,6,7,8,9,28},i,j,sum=0,count=0;
    for(j=0;j<10;j++)
    {
        sum=0;
        for(i=1;i<=num[j]/2;i++)
            {
                if(num[j]%i==0)
                    {
                        sum+=i;
                    }
            }
                if(num[i]==sum)
{
count++;
}
}
printf("%d",count);
return 0;
}


