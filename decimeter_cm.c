#include<stdio.h>
int main()
{
    float decimeter;
    float convert;
    printf("Enter number to convert decimeter into cm ");
    scanf("%f",&decimeter);
    convert=decimeter*10;
    printf("cm = %.4f",convert);
    return 0;
}