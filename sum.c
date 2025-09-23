#include<stdio.h>
int main()
{
    int sum,n;
    int i=0;
    printf("Enter number to calculate its sum from one to ....");
    scanf("%d",&i);
    for(n=1;n<=i;n++)
    {
        sum=sum+n;
    }
    printf("Sum is %d",sum);
    return 0;
}