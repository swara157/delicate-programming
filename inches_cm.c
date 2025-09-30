#include<stdio.h>
int main()
{
    int inches;
    float convert;
    printf("Enter number to convert inches into cm ");
    scanf("%d",&inches);
    convert=inches*2.54;
    printf("cm = %.2f",convert);
    return 0;
}