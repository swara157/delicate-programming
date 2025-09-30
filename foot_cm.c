#include<stdio.h>
int main()
{
    int foot;
    float convert;
    printf("Enter number to convert foot into cm ");
    scanf("%d",&foot);
    convert=foot*30.48;
    printf("cm = %.2f",convert);
    return 0;
}
