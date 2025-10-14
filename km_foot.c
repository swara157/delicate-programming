#include<stdio.h>
int main()
{
    float kilometer;
    float convert;
    printf("Enter number to convert kilometer into foot ");
    scanf("%f",&kilometer);
    convert=kilometer*3280.84;
    printf("foot = %.3f",convert);
    return 0;
}