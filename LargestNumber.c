// LargestNumber.c
// This program finds the largest number in an array of integers.

#include <stdio.h>
#define Size 5

void getInput(int arr[], int size);  // Function prototype to get input from the user
int findLargest(int arr[], int size);  // Function prototype to find the largest number

int main()
{

    int arr[Size];  // Declare an array of fixed size

    getInput(arr, Size);  // Function to get input from the user

    printf("\nLargest element in the array is: %d\n", findLargest(arr, Size));  // Function to find the largest number
    return 0;
}

void getInput(int arr[], int size) {
    printf("Enter numbers in the array: \n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

int findLargest(int arr[], int size) {
    int largest = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}