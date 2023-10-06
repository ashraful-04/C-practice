#include <stdio.h>

int main()
{
    int integervalue = 42;
    float floatvalue = 3.14;
    double doublevalue = 2.1345;
    char charvalue = 'A';

    printf("Integer: %d\n", integervalue);
    printf("Float:%.2f\n", floatvalue);
    printf("Double:%lf\n", doublevalue);
    printf("Char:%c\n", charvalue);

    return 0;
}