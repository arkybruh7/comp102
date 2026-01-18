//find largest number in array using function
//while passing value by reference(passing the memory address instead of value any change done in the variable in module will reflect throughout)
// array = &array[0]
#include<stdio.h>
int largeArray(int arr[], int num);
int main()
{
    int array[10],largest,i,n;
    for(i=0;i<10;i++)
    {
        printf("Enter Values");
        scanf("%d",&array[i]);
    }
    largest = largeArray( array, 10);
    printf("The Largest Number is %d",largest);
    return 0;
}

int largeArray(int arr[], int num)
{
    int temp,i;
    temp = arr[0];
    for(i=0;i<10;i++)
    {
        if (arr[i]>temp)
        {
            temp = arr[i];
        }
    }
    return temp;
}