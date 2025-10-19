#include<stdio.h>
float div(float x,float y)
{
    float d=x/y;
    return d;
}
int main()
{
    float a,b,c;
    printf("Enter number to divide them ");
    scanf("%f %f",&a,&b);
    c=div(a,b);
    printf("The division is %0.2f \n",c);
    return 0;
}