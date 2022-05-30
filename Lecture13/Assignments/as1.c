#include <stdio.h>
#include <math.h>

//struct members contain information about the line that connects two points
struct line {

    //nested struct holds x and y coordinates for both points 
    struct point{
        float x;
        float y;
    } point1, point2;
    float slope;
    float distance;
};

//function declarations
float solveSlope(struct line line1);
void getSlopeInterceptForm (struct line line1);
void getMidpoint(struct line line1);
float solveDistance(struct line line1);

void main() {
    struct line line1;

    //prompt for point 1
    printf("Enter x and y for point1: ");
    scanf("%f%f", &line1.point1.x, &line1.point1.y);

    //prompt for point 2
    printf("Enter x and y for point2: ");
    scanf("%f%f", &line1.point2.x, &line1.point2.y);

    //store return values from functions into structure members
    line1.slope = solveSlope(line1);
    line1.distance = solveDistance(line1);

    /* Informative Output for User */

    //for cases when both points can only be connected by a vertical line
    if (line1.point1.x == line1.point2.x) {

        //vertical lines have an undefined slope
        printf("Slope: undefined\n");   
        printf("Slope-Intercept Form: x = %f\n", line1.point1.x);
    }

    else {
        printf("Slope: %f\n", line1.slope);
        getSlopeInterceptForm(line1);
    }
    
    getMidpoint(line1);
    printf("Distance between 2 points: %f\n",  line1.distance);
    
}

/* FUNCTION DEFINITIONS */
//finds slope of line that passes through the two points
float solveSlope(struct line line1) {

    float rise, run;    //rise and run aren't necessary, these local variables help readability

    rise = (line1.point2.y - line1.point1.y); //difference between y coordinates
    run = (line1.point2.x - line1.point1.x);  //difference between x coordinates

    return rise/run;
}

//prints midpoint of two points
void getMidpoint(struct line line1) {

    float mid_x, mid_y;     //again, not neccesary, but these help readability

    mid_x = (line1.point2.x + line1.point1.x)/2;
    mid_y = (line1.point2.y + line1.point1.y)/2;
    
    printf("Midpoint: (%f, %f)\n", mid_x, mid_y);
}

//solves for the distance between two points using Pythagorean theorem
float solveDistance(struct line line1) {
    float distance, squared_x_difference, squared_y_difference;

    //squares the differences between the coordinates
    squared_x_difference = pow((line1.point2.x - line1.point1.x), 2);
    squared_y_difference = pow((line1.point2.y - line1.point1.y), 2);

    distance = sqrt(squared_x_difference + squared_y_difference);

    return distance;
}

//prints slope-intercept form of the line that passes through two points
void getSlopeInterceptForm(struct line line1) {

    float y_intercept; //in 'y = mx + b', b represents the y-intercept

    // 'b = y - mx' is derived from 'y = mx + b'
    y_intercept = line1.point1.y - (line1.slope * line1.point1.x);

    if (line1.slope != 0) {
        printf("Slope-Intercept Form: y = %fx + %f\n", line1.slope, y_intercept);
    }

    //does not print slope if it's equal to 0
    else {
        printf("Slope-Intercept Form: y = %f\n", y_intercept);
    }
}
