#include<stdio.h>
int hcf(int a , int b)
{
    b = a % b;
    
}
int main()
{
    int a , b;
    printf("Enter two Numbers\t:");
    scanf("%d %d",&a , &b);
    hcf(a, b);
}