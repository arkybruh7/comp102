#include <stdio.h>
#include <string.h>
struct person
{
    char name[10];
    int age;
};
void main()
{
    struct person p1 = {"Ram", 20}, *ptr;
    ptr = &p1;
    printf("%s", (*ptr).name);
    printf("%d", ptr->age);

    // ptr = &p1;
    // printf("\n%s :: %d", ptr->name, ptr->age);
    // strcpy(ptr->name, "Shyam");
    // ptr->age = 16;
    // printf("\n%s :: %d", ptr->name, ptr->age);
}