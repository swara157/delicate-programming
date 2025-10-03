#include<stdio.h>
int main()
{
    int inches;
    float convert;
    printf("Enter number to convert inches into kilometer ");
    scanf("%d",&inches);
    convert=inches/39370;
    printf("meter = %f",convert);
    return 0;
}