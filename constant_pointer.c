#include<stdio.h>

int main(){
    int value1 = 100;
    int value2 = 200;
    int* const ptr = &value1; // ptr is a constant pointer to an int

    printf("Value pointed by ptr: %d\n", *ptr);
    *ptr = value2; // This line is valid, we can change the value pointed to by ptr
    printf("New value pointed by ptr: %d\n", *ptr);
    
    /*
    ptr = &value1; // This line will cause a compilation error because ptr is a constant pointer
    */
}