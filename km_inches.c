#include<stdio.h>
int main()
{
    float kilometer;
    float convert;
    printf("Enter number to convert kilometer into inches ");
    scanf("%f",&kilometer);
    convert=kilometer*39370.1;
    printf("inches = %f",convert);
    return 0;
}