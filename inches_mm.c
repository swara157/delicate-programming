#include<stdio.h>
int main()
{
    int inches;
    float convert;
    printf("Enter number to convert inches into millimeter ");
    scanf("%d",&inches);
    convert=inches*25.4;
    printf("mm = %.2f",convert);
    return 0;
}