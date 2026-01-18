#include<stdio.h>
    int n, a=0 , b=1 , c, count=1;
int main()
{

    printf("Enter Number Of Terms");
    scanf("%d", &n);
    printf("%d ",a);
    do
    {
    count+=1;
    a = b;
    b = c;
    c = a + b;
    printf("%d \t", c);
    } while (count<n);
    return 0;
}

//0,1 ,1, 2, 3, 5, 8