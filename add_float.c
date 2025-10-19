#include<stdio.h>
int main()
{
    float a;
    float b;
    float sum;
    printf("Enter two numbers are to add them ");
    scanf("%f %f",&a,&b);
    sum=a+b;
    printf("\n The sum of two numbers is %.2f ",sum);
    return 0;
}