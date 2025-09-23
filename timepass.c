#include<stdio.h>
int main()
{
    int i,n;
    int a;
    printf("Enter number to print something for timepass");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    if(i<10)
    {
        //for(a=0;a<2;a++)   
        printf("Hello\t");
    }
    else if(i>=10 && 20>=i)
    {
        //for(a=2;a<5;a++)
         printf("Robot\t");
    }   
    else
    {
        printf(" moving\t");
    }  
    }  
     return 0;

}