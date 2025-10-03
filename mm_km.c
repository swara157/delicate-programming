#include<stdio.h>
int main()
{
    int mm;
    float convert;
    printf("Enter number to convert meter into kilometer  ");
    scanf("%d",&mm);
    convert=mm/1000;
    printf("kilometer = %f",convert);
    return 0;
}