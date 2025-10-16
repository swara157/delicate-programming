#include<stdio.h>
int main()
{
    float kilometer;
    float convert;
    printf("Enter number to convert kilometer into metre ");
    scanf("%f",&kilometer);
    convert=kilometer*1000;
    printf("metre = %0.2f",convert);
    return 0;
}