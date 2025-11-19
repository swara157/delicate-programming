#include<stdio.h>
void low()
{
    printf("Speed Low ! \n");
}
void medium()
{
    printf("Speed Medium ! \n");
}
void high()
{
    printf("Speed High ! \n");
}
int main()
{
    int a;

    printf("Enter 1 for low speed of fan \n");

    printf("Enter 2 for medium speed of fan \n");

    printf("Enter 3 for high speed of fan \n");

    scanf("%d",&a);
    
    if(a==1)
    {
        low();
    }

    else if(a==2)
    {
        medium();
    }
    else if (a==3)
    {
        high();
    }
    else
    {
        printf("Invalid command \n");
    }

    return 0;
}