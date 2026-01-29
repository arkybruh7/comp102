#include<stdio.h>
void swap(int *x ,int *y )
{
    int temp ;
    temp = *y;
    *y = *x;  
    *x = temp;
}
int main()
{
    int a = 1 , b= 2;
    int *x , *y;
    x = &a;
    y=&b;
    swap(x , y);
    printf("a is %d \nb is %d", a , b);
    return 0;

}