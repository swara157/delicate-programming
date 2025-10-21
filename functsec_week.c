#include<stdio.h>
float week(float a)
{
    return a/604800;
}
int main()
{
    float x,y;
    printf("Enter second to count week ");
    scanf("%f",&x);
    printf("Week = %f",week(x));
    return 0;
}