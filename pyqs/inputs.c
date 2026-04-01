#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
struct types
{
    int i;
    int myarr[20][5];
    char mychar[30];
    long double *ptr;
    float f;
    double d;
};

int main()
{
    struct types t1;
    printf("%d\n", sizeof(t1));
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(t1.myarr));
    printf("%d\n", sizeof(t1.mychar));
    printf("%d\n", sizeof(t1.ptr));
    printf("%d\n", sizeof(t1.f));
    printf("%d\n", sizeof(t1.d));
}