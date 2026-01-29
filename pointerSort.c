#include<stdio.h>
void sort(float *arr, int index)
{
    int i, j;
    float temp;
    for(i=0;i<index;i++)
    {
        for(j=i+1;j<index;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main()
{
    int i, index = 5;
    float num[index];
    for(i=0;i<index;i++)
    {
        printf("Enter Number\t:");
        scanf("%f",&num[i]);
    }
    sort(num, index);
    for(i=0;i<index;i++)
    {
        printf("%0.3f\t",num[i]);
    }
    return 0;
}