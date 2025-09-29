#include <stdio.h>
int main() 
{
    int a, b, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter 1 for Addition, 2 for Subtraction: ");
    scanf("%d", &choice);

    if (choice == 1) 
    {
        printf("Result = %d\n", a + b);
    } else if (choice == 2) 
    {
        printf("Result = %d\n", a - b);
    } else 
    {
        printf("Invalid choice\n");
    }
    return 0;
}