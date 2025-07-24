// expressionWithSwich.c
// This program demonstrates the use of a switch statement to handle different cases based on the sum of two integers.

#include<stdio.h>

int main(){
    int a,b;
    printf("Enter two integers so that sum become 0 to 3: ");
    scanf("%d %d", &a, &b);

    switch(a+b){
        case 0:
            printf("Sum is zero.\n");
            break;
        case 1:
            printf("Sum is one.\n");
            break;
        case 2:
            printf("Sum is two.\n");
            break;
        case 3:
            printf("Sum is three.\n");
            break;
        default:
            printf("Sum is out of range (0-3).\n");
    }
}