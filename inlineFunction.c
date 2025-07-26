// inlineFunction.c
// This code demonstrates the use of an inline function in C17.

#include<stdio.h>

int add(int a, int b); // Function prototype for inline function. it can be defined later. it work for both with and without optimization.
 

int main(){

    printf("The sum of 5 and 3 is: %d\n", add(5, 3));
    return 0;
}

inline int add(int a, int b) {
    return a + b;
}