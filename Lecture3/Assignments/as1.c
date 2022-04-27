#include <stdio.h>
#include <stdbool.h>

int main ()
{
    int age; bool teenager;

    teenager = false;

    //prompt
    printf("Enter age here: ");
    scanf("%d", &age);

    //valid int values are between 13-19 inclusively
    if (13 <= age && age <= 19)
    {
        teenager = true;
    }
    
    //ff. conditional statements generate a more informative output
    if (teenager)
    {
        printf("A person who is %d is considered a teenager", age);
    }

    else
    {
        printf("A person who is %d is not considered a teengager", age);
    }
    
    return 0;
}
