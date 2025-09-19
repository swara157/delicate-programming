#include<stdio.h>
int main()
{
    int a;
    int b;
    int c=0;
    printf("Enter any two no.s to swap them ",a,b);
    scanf("%d",&a);
    scanf("%d",&b);
    printf("The number you entered are %d %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\n The value you enter has been swapped now thus they are %d %d",a,b);
    return 0;

}