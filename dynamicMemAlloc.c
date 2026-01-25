#include<stdio.h>
#include<stdlib.h>
int main()
{
    int noOfData, *pointer;
    printf("Enter No. Of integers youre working with: \t");
    scanf("%d",&noOfData);
    pointer =(int *)malloc(noOfData * sizeof(int));
    for(int i=0;i<noOfData;i++)
    {
        scanf("%d",pointer+i);
    }
    for(int i=0;i<noOfData;i++)
    {
        printf("%d\t",*pointer+i);
    }
    free(pointer);
    return 0;

}