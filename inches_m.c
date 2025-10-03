#include<stdio.h>
int main()
{
    int inches;
    float convert;
    printf("Enter number to convert inches into meter ");
    scanf("%d",&inches);
    convert=inches/39.37;
    printf("meter = %f",convert);
    return 0;
}