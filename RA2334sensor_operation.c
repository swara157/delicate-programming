#include<stdio.h>
int main()
{
    int sensor1,sensor2,sum;
    printf("Enter reading from Sensor 1 : ",sensor1);
    scanf("%d",&sensor1);
    printf("Enter reading from Sensor 2 : ",sensor2);
    scanf("%d",&sensor2);
    sum=sensor1+sensor2;
    printf("Sum of Sensor readings = %d ",sum);
    return 0;
}