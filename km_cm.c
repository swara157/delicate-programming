#include<stdio.h>
int main()
{
    float kilometer;
    int convert;
    printf("Enter number to convert kilometer into cm ");
    scanf("%f",&kilometer);
    convert=kilometer*100000;
    printf("cm = %d",convert);
    return 0;
}