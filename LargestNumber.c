// LargestNumber.c
// This program finds the largest number in an array of integers.

#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int Size;

    printf("Enter the size of the array: ");
    scanf("%d", &Size);

    int *arr = (int *)malloc(Size * sizeof(int));
    if (arr == NULL)
    {
        printf("Dynamic Memory allocation failed\n");
        exit(0); // Exit if memory allocation fails
    }

    printf("Enter numbers in the array: \n");
    for (int i = 0; i < Size; i++)
    {
        scanf("%d", (arr + i));  // Using pointer arithmetic to write values
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

    free(arr);  // Free the allocated memory
    arr = NULL; // to avoid dangling pointer
    return 0;
}