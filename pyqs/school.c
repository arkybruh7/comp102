#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int day;
    char month[10];
    int year;
} date;

typedef struct
{
    char name[20];
    char location[20];
    date estd;
} college;

void display(college *data, int);

int main()
{
    college *data;

    int n;
    printf("Enter Number of colleges");
    scanf("%d", &n);
    data = (college *)malloc(n * sizeof(college));
    for (int i = 0; i < n; i++)
    {
        printf("Enter Name of college:");
        scanf("%s", data[i].name);
        printf("Enter location of college:");
        scanf("%s", data[i].location);
        printf("Enter date in year month day");
        scanf("%d %s %d", &data[i].estd.year, data[i].estd.month, &data[i].estd.day);
    }
    display(data, n);
    return 0;
}

void display(college *data, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Name of college: %s", data[i].name);
        printf("location of college: %s", data[i].location);
        printf("ESTD date in %d %s %d", data[i].estd.year, data[i].estd.month, data[i].estd.day);
    }
}