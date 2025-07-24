// expressionWithForloop.c
// This program demonstrates the use of a for loop with expressions in the initialization and condition.

#include<stdio.h>

int main(){

    int a;
    printf("I with printf: \n");
    for(int i = printf("int\n"); i < 10; i++){
        printf("i = %d\n", i);
    }

    printf("I with scanf: \n");
    for(int i = scanf("%d", &a); i < 10; i++){
        printf("i = %d\n", i);
    }
}