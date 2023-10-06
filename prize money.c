#include <stdio.h>


int main()
{
    int subject;

    printf("The list of subjects which you have passed has been given given below\n");
    printf("1. Science only\n 2. Maths only\n 3. Both Maths and Science\n");
    printf("Choose one of the options above: ");

    scanf("%d", &subject);
    if (subject == 1)
    {
       printf(" HUrray! You own 35rs");
    }
    else if (subject == 2)

    {
        printf("Hurray! you won 45rs");

    }
    else if (subject == 3)
    {
        printf("Hurray! YOU won 100rs");
    }


    return 0;
}


