#include <stdio.h>
int main() 
{
    int pin;
    printf("Enter ATM PIN: ");
    scanf("%d", &pin);

    if (pin == 4321) 
    {
        printf("Correct PIN Access Granted\n");
    } else 
    {
        printf("Incorrect PIN Access Denied\n");
    }
    return 0;
}