#include<stdio.h>
int main() 
{
int a;
printf("enter any number to check if it's even or odd number ") ;
scanf("%d",&a) ;
if(a%2==0) 
{
printf("The %d is even number ",a) ;
}
else
printf("The %d is odd number ",a);
return 0;
}
