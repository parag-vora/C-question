#include<stdio.h>

int *getFun(); // Function prototype // forward declaration

int main(){

    int *ptr = getFun();
    printf("arr[o] = %d, arr[1] = %d\n", ptr[0], ptr[1]);

    return 0;
}

int *getFun(){

    static int arr[2] = {25, 0}; // Using static to return address of local variable
    return arr; // Returning address of the array
}