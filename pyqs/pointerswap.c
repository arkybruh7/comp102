#include <stdio.h>
void swap(int *p, int *q)
{
    int temp = *q;
    *q = *p;
    *p = temp;
}
int main()
{
    int *p, *q, a = 10, b = 20;
    p = &a;
    q = &b;
    printf("a is %d b is %d", a, b);
    swap(p, q);
    printf("a is %d b is %d", a, b);
}