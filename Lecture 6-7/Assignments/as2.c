#include <stdio.h>

#define N 8

int main()
{
    //8 x 8  adjacency matrix
    int road_networks[N][N] = {
        {1, 1, 0, 0, 0, 1, 0, 0},
        {1, 1, 1, 0, 0, 0, 0, 0},
        {0, 1, 1, 0, 1, 1, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0},
        {1, 0, 1, 0, 0, 1, 0, 0},
        {1, 0, 0, 1, 0, 0, 1, 0},
        {0, 0, 0, 0, 0, 1, 0, 1}
    }; 

    //nodes/stations
    char points[N] = {'A','B','C','D','E','F','G','H'};

    //true values for conditions requiring charging stations C and D
    int is_charging_station[N] = {[2] = 1, [3] = 1};       

    
    int i, j;

    //prints column labels of adjacency matrix
    printf("         ");
    for (i = 0; i < N; i++){

        //places brackets around charging stations
        if (is_charging_station[i]){
            printf("[%c]      ", points[i]);
        }

        else{
            printf("%-8c ", points[i]);
        }
    }

    printf("\n");

    //prints row labels and adjacency matrix
    for (i = 0; i < N; i++){
        if (is_charging_station[i]){
            printf("[%c]      ", points[i]);
        }
        else{
            printf("%-8c ", points[i]);
        }
        for(j = 0; j < N; j++){
            printf("%-8d ",road_networks[i][j]);
        }
        printf("\n");
    }

    //user's current position/station
    int current_point;
    
    //prompt
    printf("Which point are you located?  0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H\n");
    printf("Enter the number that corresponds to your point: ");
    scanf("%d", &current_point);

    //executes for charging stations C and D
    if (is_charging_station[current_point]){
        printf("point: %c is a charging station", points[current_point]);
    }

    else
    {   
        //prints user's starting position
        printf("At point: %c\n", points[current_point]);

        //ends when user reaches a charging station
        while(!(is_charging_station[current_point]))
        {
            i = current_point;     

            //iterates through the (i + 1)th row of the matrix                                      
            for (j = N - 1; j >= 0; --j){     //it's valid to iterate normally, but we iterate backwards to emulate output in test cases/examples

                //executes if current point is adjacent to charging station
                if ((is_charging_station[j]) && (road_networks[i][j])){

                    current_point = j;     //as we break out of the inner loop
                    break;                 //the value of current_point breaks the conditional expression in outer loop
                }

                //effectively 'travels' to a valid adjacent node
                else if ((road_networks[i][j]) && (i != j)){
                    current_point = j;      //the latest value in current_point as inner loop ends 
                }                           //becomes the new node we check for adjacent charging stations
                
            }

            //updates the user of the their current position
            printf("Now at point %c\n", points[current_point]);
            
        }
        
        //user is at a charging station
        printf("point: %c arrived to charging station", points[current_point]);
    }
    
    return 0; 
}
