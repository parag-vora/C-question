// formattedIOfun.c
// This program demonstrates formatted input and output in C using sprintf and sscanf functions.

#include<stdio.h>

int main(){
    char arr[50];
    int even1 = 2, even2 = 4;
    int temp1, temp2;
    sprintf(arr, "even numbers: %d %d", even1, even2);

    sscanf(arr, "even numbers: %d %d", &temp1, &temp2);

    printf("Read a even mumber: %d %d\n", temp1, temp2);
    return 0;

}