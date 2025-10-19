#include<stdio.h>
int main()
{
    float a;
    float b;
    float sub;
    printf("Enter two numbers are to add them ");
    scanf("%f %f",&a,&b);
    sub=a-b;
    printf("\n The sum of two numbers is %.2f ",sub);
    return 0;
}