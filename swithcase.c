#include<stdio.h>

int main(){
    
    int day_no;

    printf("Enter the day no.: ");
    scanf("%d", &day_no);

    switch (day_no)
    {
    case 1:
        printf("Monday\n");
        switch (day_no)
        {
        case 1:     
            printf("Workout\n");
            break;
        
        default:
            break;
        }
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
        
    
    default:
        printf("Enter no. betwee 1-7");
    }

    return 0;
}