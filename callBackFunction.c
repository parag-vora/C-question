// callBackFunction.c
// This file demonstrates the use of function pointers as callbacks in C.
// It includes two operations: addition and subtraction, which can be called through a callback function.


#include<stdio.h>

void add(int a, int b){
    printf("sum is %d\n", a + b); // This function should return an int, but it currently does not
}
void subtract(int a, int b){
    printf("Subtraction is %d\n", a - b); // This function should return an int, but it currently does not
}

void callBackFun(int a, int b, void (*operation)(int, int)){
    operation(a, b); // Calling the function pointer to perform the specified operation
}



int main(){
    int x = 10, y = 5;
    void (*_addPtr)() = &add; // Pointer to add function
    void (*_subtractPtr)() = &subtract; // Pointer to subtract function

    callBackFun(x,y, _addPtr); // Calling the add function through the callback
    callBackFun(x,y, _subtractPtr); // Calling the subtract function through the callback
    return 0; // The main function should return an int, but it currently does not
}
