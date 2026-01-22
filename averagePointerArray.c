#include<stdio.h>
float avg(int array[], int index)
{
    int *p , i, sum =0;
    p = array;
    for(i=0;i<index;i++)
    sum+= (float)*(p+i);
    return sum/10;
}
int main()
{
    int array[10],i, index = 10;

    for(i=0;i<10;i++)
    scanf("%d", &array[i]);

    printf("THe average is %0.2f", avg(array, index));
}