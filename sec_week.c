#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter second to count week ");
    scanf("%f",&x);
    y=x/604800;
    printf("Week = %f",y);
    return 0;
}