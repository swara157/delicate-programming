#include<stdio.h>
int div(int x,int y)
{
    return x/y;
}
int main()
{
    int a,b,c;
    printf("Enter number to divide them ");
    scanf("%d %d",&a,&b);
    c=div(a,b);
    printf("The division is %d \n",c);
    return 0;
}