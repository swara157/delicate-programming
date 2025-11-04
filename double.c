#include<stdio.h>
int main()
{
    double x=1.0/0.0;
    printf("x = %d\n",x);
    printf("x = %d",x==x+2);
    return 0;
}