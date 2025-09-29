#include<stdio.h>
int main()
{
    float sensortemp,threshold=80,critical=100;
    printf("Enter your tempreture ",sensortemp);
    scanf("%f",&sensortemp);
    if(sensortemp<=threshold)
    {
        printf("Patient status : Normal");
    }
    else if(sensortemp > threshold && critical > sensortemp)
    {
        printf("Patinet status : Warning");
    }
    else
    {
        printf("Patient status : Critical");
    }
    return 0;
}