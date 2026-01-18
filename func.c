#include<stdio.h>
float greatest(float a,float b,float c);
int main()
{
    float a, b, c;
    printf("Enter Thress Number");
    scanf("%f %f %f",&a ,&b, &c);
    printf("Greatest Number is %0.2f",greatest(a,b,c));
    return 0;
}
float greatest(float a,float b,float c)
{
if(a>b && a>c){
    return a;
}
else if(b>a && b>c)
{
    return b;
}
else{
    return c;
}
}