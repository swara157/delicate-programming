#include<stdio.h>
int main()
{
    int sec;
    int convert;
    printf("Enter second to convert into millisecond ");
    scanf("%d",&sec);
    convert=sec*1000;
    printf("Millisecond = %d",convert);
    return 0;
}