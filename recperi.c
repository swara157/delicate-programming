#include<stdio.h>
int main()
{
    int l,b,A;
    printf("enter length and breadth of the rectangle to get perimeter ");
    scanf("%d %d",&l, &b);
    A=2*(l+b);
    printf("The Perimeter of the rectangle is = %d ",A);
    return 0;
}