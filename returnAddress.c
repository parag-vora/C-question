#include<stdio.h>
#include<stdlib.h> // For malloc and free

int *getFun(); // Function prototype // forward declaration

int main(){

    int *ptr = getFun();
    printf("arr[o] = %d, arr[1] = %d\n", ptr[0], ptr[1]);

    free(ptr); // Freeing the allocated memory is not necessary here, as we are returning the address
    
    return 0;
}

int *getFun(){

    //static int arr[2] = {25, 0}; // Using static to return address of local variable^

    int *arr = (int *)malloc(2 * sizeof(int)); // Dynamically allocating memory for the array
    arr[0] = 25; // Assigning values to the array
    arr[1] = 0; // Assigning values to the array

    return arr; // Returning address of the array
}