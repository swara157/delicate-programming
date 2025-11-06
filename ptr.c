#include<stdio.h>
int main()
{
    int *ptr;
    int i;
    int num[5]={10,20,30,40,50};
    ptr=num;
    for(i=0;i<5;i++)
    {
        
        printf("The %d stores %d value \n",i+1,*(ptr+i));
    }
    return 0;
}