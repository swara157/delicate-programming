#include<stdio.h>
float add(float x,float y)
{
    float sum=x+y;
    return sum;
}
int main()
{
    float a,b,c;
    printf("Enter number to add them ");
    scanf("%f %f",&a,&b);
    c=add(a,b);
    printf("The sum is %0.2f \n",c);
    return 0;
}