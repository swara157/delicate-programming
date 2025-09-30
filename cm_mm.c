#include<stdio.h>
int main()
{
    float millimeter;
    float convert;
    printf("Enter number to convert millimeter into cm ");
    scanf("%f",&millimeter);
    convert=millimeter/10;
    printf("cm = %.2f",convert);
    return 0;
}