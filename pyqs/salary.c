#include <stdio.h>
typedef struct
{
    char name[10];
    char sex[10];
    int age;
    char designation[30];
    int salary;
} biodata;
int main()
{
    int n = 10;
    biodata b[10];
    for (int i = 0; i < n; i++)
    {
        printf("Name: ");
        scanf("%s", b[i].name);
        printf("sex: ");
        scanf("%s", b[i].sex);
        printf("Age: ");
        scanf("%d", &b[i].age);
        printf("designation: ");
        scanf("%s", b[i].designation);
        printf("salary: ");
        scanf("%d", &b[i].salary);
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i].salary > 15000)
        {
            printf("Name: %s ", b[i].name);
            printf("sex: %s", b[i].sex);
            printf("Age: %d", b[i].age);
            printf("designation: %s", b[i].designation);
            printf("salary: %d", b[i].salary);
        }
    }
    return 0;
}