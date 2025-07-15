#include <stdio.h>

int main(){
    int value1 = 100;
    int  value2 = 200;

    const int* const ptr = &value1; // ptr is a constant pointer to a constant intP
    printf("Value pointed by ptr: %d and %p\n", *ptr, ptr);

    // *ptr = value2; // This line will cause a compilation error because ptr points to a constant int
    // ptr = &value2; // This line will also cause a compilation error because ptr is a constant pointer
}