#include<stdio.h>
int main()
{
    int arr[] ={1,2,3,4};
    int *p,*l;
    int b = 10;
    p=&b;
    l=arr;
    l+=1;
    printf("%d \n",*l);
    printf("%u \n", l);   
    printf("%u \n",arr);
    printf("%d \n",*arr+1);    //prints second element of array 
    printf("%u \n", p); //value inside of p, ie address of b
    printf("%d \n", *p);    //value of b that is being pointed by p
    printf("%d \n", *&b);  //address of b
    printf("%u \n", &p);    // address of pointer
    printf("%d",**&p); // '&p'--> address of pointer '*&p'--> value of pointer ie address of b '**&p' --> value inside b

}