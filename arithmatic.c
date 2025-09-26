#include<stdio.h>
int add(int x,int y);
int sub (int x,int y);   
int multi(int x,int y);
int div(int x,int y);
int main()
{
    int x,y;
    printf("Enter two numbers to get basic maths operation done ");
    scanf("%d\t %d",&x,&y);
    printf("\n The values are on which opreation is done are %d\t %d\t",x,y);
    printf("\n The addition of two number is = %d", add(x,y));
    printf("\n The sutraction of two number is = %d", sub(x,y));
    printf("\n The multiplication of two number is = %d", multi(x,y));
    printf("\n The division of two number is = %d", div(x,y));
    return 0;
}
int add(int a,int b)
{
    int c=a+b;
    return c;
}
int sub(int a,int b)
{
    int d=a-b;
    return d;
}
int multi(int a,int b)
{
    int e=a*b;
    return e;
}
int div(int a,int b)
{
    int f=a/b;
    return f;
}
