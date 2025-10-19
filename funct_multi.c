#include<stdio.h>
int multi(int x,int y)
{
    return x*y;
}
int main()
{
    int a,b,c;
    printf("Enter number to multiply them ");
    scanf("%d %d",&a,&b);
    c=multi(a,b);
    printf("The multiplication is %d \n",c);
    return 0;
}