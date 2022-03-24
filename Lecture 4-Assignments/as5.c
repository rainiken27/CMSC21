#include <stdio.h>

int main()
{
    int total_days, starting_day, i;
    
    //prompt
    printf("Enter number of days in month: ");
    scanf("%d", &total_days);

    //input validation
    switch (total_days)
    {
        case 28: case 29: case 30: case 31: break; //28, 29, 30, 31 are the only valid number of days in a month

        default: printf("Invalid Number of Days in a Month Entered. Please Check Your Input."); return 0; break;
    }

    //prompt
    printf("Enter the starting day of the week (1 = Sun, 7 = Sat): ");
    scanf("%d", &starting_day);

    //input validation
    if ((starting_day < 1) || (starting_day > 7))
    {
        printf("Invalid Starting Day Entered. Only Use Values Between 1 and 7");
        return 0;
    }

    //prints spaces to move day 1 to appropriate starting day
    for (i = 1; i < starting_day; i++)
    {
        printf("   ");
    }

    //prints out the days and appropriate white spaces
    for (i = 0; i < total_days; ++i)
    {
        //prints new line every 7 days 
        if (((i + starting_day) % 7) == 0) //considers the starting day to prevent formatting problems
        {
            printf("%2d\n", i + 1); //add 1 because i is initially 0
        }

        //prints out the days
        else
        {
            printf("%2d ", i + 1);
        }
    }
}
