#include<stdio.h>
int main()
{
    float h,m;
    printf("Enter hours ");
    scanf("%f",&h);
    m=h*60;
    printf(" Minutes = %.2f",m);
    return 0;
}