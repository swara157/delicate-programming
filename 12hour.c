#include<stdio.h>
int main()
{
    int n;
    float a,b;
    printf("Enter time to convert in 12 hour format \n");
    scanf("%f",&a);
    printf("Enter if its AM=1 or PM=0 \n ");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Time = %.1f A.M.",a);
    }
    else if(n==0)
    {
        b=a-12;
        printf("Time = %.1f P.M.",b);
    }
    else
    {
        printf("Invalid parameter entered");
    }
    return 0;
}