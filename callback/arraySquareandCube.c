#include<stdio.h>
#include<stdint.h>

typedef void (*FPTR)(int *, int);

void square(int *arr, int size){
    printf("___Square___\n");
    for(uint8_t i = 0; i < size; i++)
    {
        printf("Square %d: %d \n", *(arr+i), *(arr+i) * *(arr+i));
    }
}

void cube(int *arr, int size){
    printf("___Cube___\n");
    for(uint8_t i = 0; i < size ; i++){
        printf("Cube of %d is %d\n", *(arr+i), *(arr + i) * *(arr + i) * *(arr + i));
    }
}

void fun(void (*fptr)(int *, int), int *arr, int size){
    (fptr)(arr, size);
}

int main(){
    //void (*ptr)(int *, int);
    uint8_t choice;
    FPTR ptr = NULL;
    printf("Enter a choice 1. Square and 2. Cube: ");
    scanf("%u", &choice);
    int arr[] = {1,2,3};
    uint8_t size = sizeof(arr)/sizeof(arr[0]);

    switch (choice)
    {
    case 1:
        ptr = square;
        break;
    case 2:
        ptr = cube;
        break;
    default:
        break;
    }

    fun(ptr, arr, size);
    
    return 0;
}