#include<stdio.h>
int main()
{
    float ms;
    float convert;
    printf("Enter millisecond to convert into second ");
    scanf("%f",&ms);
    convert=ms/1000;
    printf("second = %f",convert);
    return 0;
}