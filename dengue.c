#include<stdio.h>
int main()
{
    char s[200];
    int i;
    printf("to check if you have dengue enter symptoms you have from below");
    printf("1.fever \n 2.headache \n 3.eyes pain \n 4.joint pain \n 5.nausea \n");
    scanf("%s",&s);
    printf("Enter number mention in option ");
    scanf("%d",&i);
    if(i<=5)
    {
        printf("You have dengue");
    }
    else{
        printf("You have nothing to worry");
    }
    return 0;
}