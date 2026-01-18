#include<stdio.h>
int total_attendance=0;
int attendance(int i )
{
    int present;
    printf("\nEnter attendance in class %d :\t",i);
    scanf("%d",&present);
    return present;
}
int main()
{
    int i;
for(i=1;i<=10;i++)
{
total_attendance+= attendance(i);
}
printf("\nTotal Student Present is %d",total_attendance);
return 0;
}