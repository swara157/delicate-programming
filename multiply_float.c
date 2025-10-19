#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter any two numbers to multiply them  ");
    scanf("%f %f",&a ,&b);
    printf("The two number entered are %.2f %.2f\n",a,b);
     c=a*b;
    printf("The multiplication of two numbers is %.2f ", c);
    return 0;  
}