#include<stdio.h>
int main()
{
    int inches;
    float convert;
    printf("Enter number to convert inches into decimeter ");
    scanf("%d",&inches);
    convert=inches/3.937;
    printf("decimeter = %f",convert);
    return 0;
}