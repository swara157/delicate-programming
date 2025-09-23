#include<stdio.h>
int main()
{
    int a,b,c,sum,avg;
    printf("Enter three subject number to get its average ");
    printf("\n Marks obtain in maths ",a);
    scanf("%d",&a);
    printf("\n Marks obtain in robotics ",b);
    scanf("%d",&b);
    printf("\n Marks obtain in automation ",c);
    scanf("%d",&c);
    sum=a+b+c;
    avg=sum/3;
    printf("\n The sum of marks obtain is %d",sum);
    printf("\n The average marks obtain are %d",avg);
    return 0;
}