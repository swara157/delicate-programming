#include<stdio.h>
int main()
{
    float a;
    float b;
    float div;
    printf("Enter two numbers ");
    scanf("%f %f",&a,&b);
    div=a/b;
    printf("\n The division of two numbers is %.2f ",div);
    return 0;
}