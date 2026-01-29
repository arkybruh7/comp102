#include<stdio.h>
void reverse(int *pointer , int index)
{

    for(int i=index-1;i>=0;i--)
    {
        printf("%d\t", *pointer+i);
    }
}
int main()
{
    int array[]={1,2,3,4,5,6,7,8,9};
    int index =  9;
    reverse(array, index);
    return 0;
}