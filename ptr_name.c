#include<stdio.h>
int main()
{
    char name[100];
    printf("enter your name to know it memory location ");
    scanf("%s",name);
    printf("%p",(void*)&name);
    return 0;
}