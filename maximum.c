#include<stdio.h>
int main() 
{
int a, b;
printf("enter any two numbers to get maximum number between them  ") ;
scanf("%d %d",&a,&b) ;
if(a>b) 
{
printf("The maximum number is  %d",a) ;
}
else
printf("The maximum number is  %d",b);
return 0;
}
