// ifelseifladder.c
// This program demonstrates the use of an if-else ladder to determine the day of the week based on user input.


#include<stdio.h>

int main(){
    char *arr[] = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
    int day;
    printf("Enter a number (1-7) to find the corresponding day of the week: ");
    scanf("%d", &day);
    printf("Day is: %s\n", *(arr + day - 1));
    return 0;
}