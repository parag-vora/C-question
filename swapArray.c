// swapArray.c
// This program swaps the elements of an array in place.

#include<stdio.h>

void swapFun(int arr[], int size){
    for(int i = 0; i < size/2; i++){
        int temp = arr[i];
        arr[i]= arr[size -i -1];
        arr[size - i - 1] = temp;
    }
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Original array: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }   
    swapFun(arr, size);
    printf("\nSwapped array: ");    
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }


 return 0;
}