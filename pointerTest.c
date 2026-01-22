#include<stdio.h>
int main()
{
    int *p;
    int a = 24;
    p = &a - 234;
    printf("%u \n", p);
    printf("%d", *p);
}