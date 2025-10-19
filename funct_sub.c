#include<stdio.h>
int sub(int x,int y)
{
    return x-y;
}
int main()
{
    int a,b,c;
    printf("Enter number to subtract them ");
    scanf("%d %d",&a,&b);
    c=sub(a,b);
    printf("The subtraction is %d \n",c);
    return 0;
}