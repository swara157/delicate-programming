#include<stdio.h>
void start()
{
    printf("Robot STARTED! \n");
}
void stop()
{
    printf("Robot STOPPED! \n");
}
int main()
{
    int a,n,i;

    printf("Enter how many times you want to start & stop the robot : ");

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
    printf("Enter 1 to start the robot ! \n");

    printf("Enter 0 to stop the robot ! \n");

    scanf("%d",&a);

    if(a==1)

    {
        start();
    }

    else if(a==0)

    {
        stop();
    }

    else
    {
        printf("Invalid Command \n");
    }
    }
    return 0;
}