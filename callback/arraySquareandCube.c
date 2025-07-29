#include<stdio.h>
#include<stdint.h>

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
    void (*ptr)(int *, int);
    int arr[] = {1,2,3};
    uint8_t size = sizeof(arr)/sizeof(arr[0]);
    ptr = cube;
    fun(ptr, arr, size);
    
    return 0;
}