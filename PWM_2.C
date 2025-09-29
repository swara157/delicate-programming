#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    int duty = 3;
    int period = 10;
    for(i=1;i<=period;i++)
    {
    if(i <= duty)
    printf("1 ");
    else
    printf("0 ");
    }
    return 0;
}