#include <stdio.h>
int main()
{
    float f ;
float c;
 printf("Enter fahrenheit temperature" ,f);
scanf("%0.2f",&f);
c = (f * (5.0 / 9.0))-32;
    printf("Temperature in Degree Celsius : %0.2f",c) ;
    return 0;
}
