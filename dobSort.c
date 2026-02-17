#include <stdio.h>
#include <stdlib.h>
typedef struct dob
{
    int year;
    int month;
    int day;
} dob;
int main()
{
    int i, j, n;
    dob temp, *d;
    printf("ENter Number of data");
    scanf("%d", &n);
    d = (dob *)malloc(n * sizeof(dob));
    for (i = 0; i < n; i++)
    {
        printf("Enter DOB: \t");
        scanf("%d %d %d", &d[i].year, &d[i].month, &d[i].day);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if ((d[j + 1].year > d[j].year) || ((d[j + 1].year == d[j].year) && (d[j + 1].month > d[j].month)) || ((d[j + 1].year == d[j].year)) && (d[j + 1].month == d[j].month) && (d[j + 1].day > d[j].day))
            {
                temp = d[j + 1];
                d[j + 1] = d[j];
                d[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d %d %d\n", d[i].year, d[i].month, d[i].day);
    }
    free(d);
}