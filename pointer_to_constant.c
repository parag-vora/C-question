#include<stdio.h>

int main(){
    int value1 = 100;
    int value2 = 200;
    const int* ptr = &value1; // ptr is a pointer to a constant int
    printf("Value pointed by pttr: %d and %p\n", *ptr, ptr);

    // *pttr = value2; // This line will cause a compilation error because pttr points to a constant int

    ptr = &value2; // This line is valid, we can change the pointer to point to a different int
    printf("New value pointed by pttr: %d and %p\n", *ptr, ptr);
}