#include<stdio.h>
int main()
{
    int foot;
    float convert;
    printf("Enter number to convert foot into inches ");
    scanf("%d",&foot);
    convert=foot*12;
    printf("inches = %.2f",convert);
    return 0;
}