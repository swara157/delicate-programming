#include<stdio.h>
int main()
{
    float s,h;
    printf("Enter Hours ");
    scanf("%f",&h);
    s=h*3600;
    printf("Seconds = %.1f",s);
    return 0;
}