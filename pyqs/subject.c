#include <stdio.h>
typedef struct
{
    char code[7];
    char tittle[30];
    int credit;
    int students;
} courseRec;

int main()
{
    courseRec cRec;
    printf("Enter subj code");
    scanf("%s", cRec.code);
    printf("Enter tittle");
    getchar();
    gets(cRec.tittle);
    printf("Enter credit");
    scanf("%d", &cRec.credit);
    printf("Enter students");
    scanf("%d", &cRec.students);

    printf("%s\t%s\t%d\t%d", cRec.code, cRec.tittle, cRec.credit, cRec.students);
}