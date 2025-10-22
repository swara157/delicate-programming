#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter Minutes ");
    scanf("%f",&x);
    y=x/525600;
    printf("Year = %f",y);
    return 0;
}