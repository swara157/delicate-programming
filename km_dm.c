#include<stdio.h>
int main()
{
    float kilometer;
    int convert;
    printf("Enter number to convert kilometer into dm ");
    scanf("%f",&kilometer);
    convert=kilometer*10000;
    printf("dm = %d",convert);
    return 0;
}