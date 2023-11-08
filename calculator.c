#include <stdio.h>

int main()
{
    int choice, num1, num2;

    printf("Press 1 for addition:\n");
    printf("Press 2 for subtraction:\n");
    printf("press 3 for multiplication:\n");
    printf("Press 4 for division:\n");

    printf("Enter the first number:");
    scanf("%d", &num1);
    printf("Enter the second number:");
    scanf("%d", &num2);
    printf("Enter your operation choice:");
    scanf("%d", &choice);
    printf("Output:\n");

    switch (choice)
    {
    case 1:
        printf("%d", num1 + num2);
        break;
    case 2:
        printf("%d", num1 - num2);
        break;
    case 3:
        printf("%d", num1 * num2);
        break;
    case 4:
        printf("%d", num1 / num2);
        break;
    default:
        printf("Please a proper choice.");
        break;
    }

    return 0;
}