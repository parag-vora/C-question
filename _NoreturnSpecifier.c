// _NoreturnSpecifier.c
// This file demonstrates the use of the _Noreturn specifier in C17.



#include<stdio.h>
#include<stdlib.h>

_Noreturn int fun(){

    printf("Noreturn function called\n");
    exit(0);

 //   while(1) {}  // Infinite loop to ensure this function does not return
        
}

int main(){

    printf("Main function started\n");
    fun();  // Calling the noreturn function
    printf("This line will not be executed\n"); // This line will not be executed
    return 0; // This return statement is unreachable
}