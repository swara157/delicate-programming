#include<stdio.h>
int main()
{
    int cm;
    float convert;
    printf("Enter number to convert cm into inches ");
    scanf("%d",&cm);
    convert=cm/2.54;
    printf("Inches = %.4f",convert);
    return 0;
}