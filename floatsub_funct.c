#include<stdio.h>
float diff(float x,float y)
{
    float sub=x-y;
    return sub;
}
int main()
{
    float a,b,c;
    printf("Enter number to subtracting them ");
    scanf("%f %f",&a,&b);
    c=diff(a,b);
    printf("The difference is %0.2f \n",c);
    return 0;
}