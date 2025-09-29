#include<stdio.h>
int main()
{
    float sensortemp,threshold=100,critical=150;
    printf("Enter your tempreture ",sensortemp);
    scanf("%f",&sensortemp);
    if(sensortemp<=threshold)
    {
        printf("Patient status : Normal");
    }
    else if(sensortemp > threshold && critical > sensortemp)
    {
        printf("Patinet status : Typoid");
    }
    else 
    {
        printf("Patient status : Dengue");
    }
    return 0;
}