#include<stdio.h>
int main()
{
    int h,b,a;
    printf("enter height of the triangle ");
    scanf("%d",&h);
    printf("enter base of the triangle ");
    scanf("%d",&b);
    a=0.5*(h*b);
    printf("Area of triangle is %d",a);
    return 0;
}