#include<stdio.h>
struct human_temp
{
    float temperature;
    int age;
    char blood[4];
    char mobile[10];//=n{0,1,2,3,4,5,6,7,8,9};
};
int main()
{
    struct human_temp h1;
  printf("Enter the temperature of your body ");
  scanf("%f",&h1.temperature);
  printf("Enter age  ");
  scanf("%d",&h1.age);  
  printf("Enter your blood group  ");
  scanf("%s",&h1.blood);  
  printf("Enter mobile number ");
  scanf("%s",&h1.mobile);
  printf("-----------RECIPT----------\n");
  printf("Temperature : %.2f\n",h1.temperature);
  printf("Age : %d\n",h1.age);
  printf("Blood Group : %s\n",h1.blood);
  printf("Mobile No. : %s\n",h1.mobile);
  return 0 ;
}