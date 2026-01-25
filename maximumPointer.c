#include<stdio.h>
void maximum(int *x , int *y)
{
    if(*x > *y)
    printf("The larger number is %d",*x);
    else
    printf("The larger number is %d",*y);

}
int main()
{
    int a = 6 , b = 9 , *x , *y;
    x = &a;
    y=&b;
    maximum(x,y);
}
