#include<stdio.h>
void mathoperation(int x,int y,int *s,int *d,int *m,int *di);
int main()
{
    int x,y,s,d,m,di;
    printf("Enter the number to operate operations ");
    scanf("%d %d",&x,&y);
    mathoperation(x,y,&s,&d,&m,&di);
    printf("sum =%d\n sub=%d\n multi=%d\n div=%d\n ",s,d,m,di);
   
}
void mathoperation(int a,int b,int *sum,int *diff,int *multi,int *div)
{
    *sum = a+b;
    *diff = a-b;
    *multi = a*b;
    *div = a/b;
}