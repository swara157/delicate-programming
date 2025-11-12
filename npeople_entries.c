#include<stdio.h>
struct human_temp
{
    float temperature;
    int age;
    char blood[4];
    char mobile[10];
};
int main()
{
    struct human_temp h[3];
    int i;
    int n;
    printf("Enter the number of people entries to enter - ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter Details of person\n");
        printf("Enter Temperature \n");
        scanf("%f",&h[i].temperature);
        printf("Enter Age \n");
        scanf("%d",&h[i].age);
        printf("Enter Blood group \n");
        scanf("%s",&h[i].blood);
        printf("Enter Mobile \n");
        scanf("%s",&h[i].mobile);
    }
    for(i=0;i<n;i++)
    {
        printf("\nDetails of person  :  %d\n\n",i+1);
        printf("Temperature : %.2f\n",h[i].temperature);
        printf("Age : %d\n",h[i].age);
        printf("Blood group : %s\n",h[i].blood);
        printf("Mobile : %s\n",h[i].mobile);
    }

}