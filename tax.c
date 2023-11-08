#include <stdio.h>

int main()
{

    int salary;
    double tax;

    printf("Enter the amount of salary: ");
    scanf("%d", &salary);
    if (salary <= 10000)
    {
        printf("No Tax required");
    }
    else if (salary > 10000 && salary <= 100000)
    {
        tax = salary * 0.10;
        printf("Tax=%.2lf", tax);
    }
    else if (salary > 100000 && salary <= 1000000)
    {
        tax = salary * 0.25;
        printf("Tax=%.2lf", tax);
    }
    else
    {
        tax = salary * 0.40;
        printf("Tax=%.2lf", tax);
    }

    return 0;
}