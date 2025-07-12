// LargestNumber.c
// This program finds the largest number in an array of integers.

#include <stdio.h>
#define Size 5      // Define the size of the array by a macro

int main(){
    int arr[Size];
    printf("Enter numbers in the array:\n");
    // Using scanf to read integers into the array
    for(int i = 0; i < Size; i++){
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    for (int i = 0; i < Size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }       
    }
    printf("\nLargest element in the array is: %d\n", largest);
    return 0;    
}