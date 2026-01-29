#include<stdio.h>
#include<stdlib.h>
    typedef struct student{
        char name[10];
        int roll;
    }std;
int main()
{

    int i,n,j;
    std *s,temp;
 
    printf("Enter number of students:\t");
    scanf("%d",&n);
    s = (std *)malloc(n*sizeof(std));
    for(i=0;i<n;i++)
    {
        printf("Enter Name\t:");
        scanf("%s",s[i].name);
        printf("Enter Roll\t:");
        scanf("%d",&s[i].roll);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i].roll>s[j].roll)
            {
                temp = s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s\t",s[i].name);
        printf("%d\n",s[i].roll);
    }
    free(s);
}