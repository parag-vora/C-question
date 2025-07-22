// cartesianCoordinates.c
// This program determines the quadrant of a point in Cartesian coordinates
// or if it lies on the axes or at the origin.

#include<stdio.h>

int main(){
    int x,y;
    printf("Enter the x coordinate: ");
    scanf("%d", &x);
    printf("Enter the y coordinate: ");
    scanf("%d", &y);

    if(x > 0 && y > 0) {
        printf("The point (%d, %d) is in the first quadrant.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("The point (%d, %d) is in the second quadrant.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("The point (%d, %d) is in the third quadrant.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("The point (%d, %d) is in the fourth quadrant.\n", x, y);
    } else if (x == 0 && y != 0) {
        printf("The point (%d, %d) is on the Y-axis.\n", x, y);
    } else if (y == 0 && x != 0) {
        printf("The point (%d, %d) is on the X-axis.\n", x, y);
    } else {
        printf("The point (%d, %d) is at the origin.\n", x, y);
    }
}