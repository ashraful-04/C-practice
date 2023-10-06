#include <stdio.h>

int main()
{
    int num1, num2, temp;

    printf("Enter the first nummber:");
    scanf("%d", &num1);

    printf("Enter the second number:");
    scanf("%d", &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping:\n");
    printf("The first numberis:%d\n", num1);
    printf("The second number is:%d\n", num2);

    return 0;
}