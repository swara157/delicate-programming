#include<stdio.h>
int main()
{
    float m;
    float convert;
    printf("Enter number to convert meter into inches ");
    scanf("%f",&m);
    convert=m*39.37;
    printf("inches = %f",convert);
    return 0;
}