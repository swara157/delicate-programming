#include <stdio.h>
int main() 
{
    int num;
    printf("Enter number of days having fever: ");
    scanf("%d", &num);

    if (num >= 14) 
    {
        printf("Positive Report \n");
    } else if (num < 14) 
    {
        printf("Negative Report \n");
    } else 
    {
        printf("No symptoms in Report \n");
    }
    return 0;
}