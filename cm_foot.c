#include<stdio.h>
int main()
{
    int cm;
    float convert;
    printf("Enter number to convert cm into foot ");
    scanf("%d",&cm);
    convert=cm/30.48;
    printf("Foot = %.4f",convert);
    return 0;
}