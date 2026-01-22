#include<stdio.h>
void swap(int *x ,int *y)
{
     int temp;
    temp = *y;
    *y = *x ;
    *x = temp;
}
int main()
{
     int a = 6 , b = 7;
    swap(&a , &b);
    printf("a is %d\n", a);
    printf("b is %d", b);
    return 0;
}

