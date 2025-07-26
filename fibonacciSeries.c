// fibonacciSeries.c
// This program generates the Fibonacci series up to a specified number of terms.

#include<stdio.h>
#include<stdlib.h>



int main(){
    unsigned int n;

    printf("Enter the number of terms in the Fibonacci series(always > 2): ");
    scanf("%u", &n);

    if(n < 2) {
        printf("Please enter a number greater than 2.\n");
        return 1; // Exit if n is less than 2
    }

    int *ptr = (int *)malloc( n * sizeof(int));
    if(ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit if memory allocation fails
    }

    ptr[0] = 0; // First term
    ptr[1] = 1; // Second term

    for(unsigned int i = 2; i < n; i++){
        ptr[i] = ptr[i-1] + ptr[i-2]; // Calculate the next term
     }

    printf("Fibonacci series up to %u terms:\n", n);
    for(unsigned int i = 0; i < n; i++){
        printf("%d ", ptr[i]); // Print each term
    }

    return 0; // Successful execution
}    