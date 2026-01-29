#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct coordinate{
    int x;
    int y;
}points;
void distance(points a)
{
    float distance;
    distance=(float)sqrt((a.x*a.x + a.y*a.y));
    printf("The distance is %0.3f",distance);
}
int main()
{
    points p;
    printf("Enter the X and Y co-ordinate\t:");
    scanf("%d %d", &p.x, &p.y);
    distance(p);
    return 0;
}