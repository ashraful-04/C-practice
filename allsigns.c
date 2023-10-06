#include <stdio.h>

int main()
{

    int num1, num2, sum, sub, multi, div, mod;

    printf("Enter the first number:");
    scanf("%d", &num1);

    printf("Enter the second number:");
    scanf("%d", &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    multi = num1 * num2;
    div = num1 / num2;
    mod = num1 % num2;

    printf("Addition= %d\n", sum);
    printf("Subtraction= %d\n", sub);
    printf("Multiplicaton= %d\n", multi);
    printf("Divison= %d\n", div);
    printf("Module= %d\n", mod);

    return 0;
}