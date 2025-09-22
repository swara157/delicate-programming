#include<stdio.h>
int main() 
{
int a, b;
printf("enter any two numbers to get minimum number between them ") ;
scanf("%d %d",&a,&b) ;
if(a<b) 
{
printf("The minimum number is %d",a) ;
}
else
printf("The minimum number is %d",b);
return 0;
}
