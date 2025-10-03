#include<stdio.h>
int main()
{
    int inches;
    float convert;
    printf("Enter number to convert inches into foot ");
    scanf("%d",&inches);
    convert=inches/12;
    printf("foot = %.2f",convert);
    return 0;
}