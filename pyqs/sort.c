#include <stdio.h>
#include <string.h>
typedef struct
{
    int year;
    char month[10];
    int day;
} date;
typedef struct
{
    int roll;
    char name[20];
    char dept[20];
    date dob;
    int marks;
} data;

int main()
{
    int i, j;
    data d[5], temp;
    for (i = 0; i < 5; i++)
    {
        printf("Enter roll no: ");
        scanf("%d", &d[i].roll);
        printf("Enter name: ");
        scanf("%s", d[i].name);
        printf("Enter dept: ");
        scanf("%s", d[i].dept);
        printf("Enter year month day: ");
        scanf("%d %s %d", &d[i].dob.year, d[i].dob.month, &d[i].dob.day);
        printf("Enter marks");
        scanf("%d", &d[i].marks);
    }

    for (i = 0; i < 5 - 1; i++)
    {
        for (j = 0; j < 5 - i - 1; j++)
        {
            if (strcmp(d[j].name, d[j + 1].name) > 0)
            {
                temp = d[j];
                d[j] = d[j + 1];
                d[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf("Enter roll no:%d", d[i].roll);
        printf("Enter name: %s", d[i].name);
        printf("Enter dept: %s", d[i].dept);
        printf("Enter year month day: %d %s %d", d[i].dob.year, d[i].dob.month, d[i].dob.day);
        printf("Enter marks %d", d[i].marks);
    }
}