#include<stdio.h>
int main()
{
    float r,d;
    printf("Enter dollar to know in euros ");
    scanf("%f",&r);
    d=r/1.149;
    printf("Euros = %.3f",d);
    return 0;
}