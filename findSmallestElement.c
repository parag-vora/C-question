// File: findSmallestElement.c
// This program finds the smallest element in an array using pointer arithmetic.

#include<stdio.h>

int main(){
    int arr[5] = {5, 3, 8, 2, 4};
    int size = sizeof(arr)/sizeof(arr[0]);

    int smallest = arr[0];
    for(int i = 0; i < size; i++){
        if(*(arr+i) < smallest){
            smallest = *(arr + i);
        }
    }

    printf("Smallest element in the array is: %d\n", smallest);
    return 0;
}