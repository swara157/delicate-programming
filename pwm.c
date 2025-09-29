#include<stdio.h>
#include<conio.h>
int main()
{
    int duty = 5;
    int period = 10;
    int i;
    for(i=0;i<period;i++)
    {
    if(i < duty)
    printf("0 ");
    else
    printf("1 ");
    }
    return 0;
}