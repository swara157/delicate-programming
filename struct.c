#include<stdio.h>
#include<conio.h>
struct sensor 
{
    int id;
    float reading;
    char status[10];
};
int main()
{
    struct sensor s1;
    printf("Enter sensor id : ");
    scanf("%d",&s1.id);
    printf("Enter sensor reading : ");
    scanf("%f",&s1.reading);
    printf("Enter sensor status : ");
    scanf("%s",s1.status);
    printf("--------SENSOR DATA---------\n");
    printf("ID : %d\n",s1.id);
    printf("Reading : %.2f\n",s1.reading);
    printf("Status : %s\n",s1.status);
    return 0;
}