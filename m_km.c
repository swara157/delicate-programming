#include<stdio.h>
int main()
{
    int m;
    float convert;
    printf("Enter number to convert meter into kilometer  ");
    scanf("%d",&m);
    convert=m/1000;
    printf("kilometer = %f",convert);
    return 0;
}