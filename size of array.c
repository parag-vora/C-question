#include <stdio.h>
#define size 3

// function which accept only a pointer of array
int fun(int *ptr){

printf("size of array: %u\n", sizeof(ptr));  // size of pointer 4 or 8 byte
printf("print element using only pointer: ");
for (int i = 0; i < size; i++)
{
    printf("%d ", *(ptr+i));
}
}

// function which accept pointer of array with hardcode size
int fun1(int (*ptr)[size]){

printf("\nsize of array: %u", sizeof(*ptr));  // size of whole array

printf("\nprint element using pointer and size: ");
for(int i = 0; i < size; i++)
{
    printf("%d ", (*ptr)[i]);
}

}

// function which accept pointer of array with hardcode size
int fun2(int (*ptr)[size][size]){

printf("\nsize of 2 dimensional array: %u", sizeof(*ptr));  // size of whole array

printf("\nprint element of 2 dimensional array using pointer and size:\n");
for(int i = 0; i < size; i++)
{
    for (int j = 0; j < size; j++)
    {
        printf("%d ", (*ptr)[i][j]);
    }

    printf("\n");
}

}


// main function
int main() {

int arr[size] = {1,2,3};

fun(arr);

fun1(arr);

int arr1[size][size] = {{1,2,3},{4,5,6},{7,8,9}};

fun2(arr1);

}

