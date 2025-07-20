#include<stdio.h>

extern int externalLinkageVar; // Declaration of external linkage variable
extern int externalLinkageFun(); // Declaration of external linkage function

int main(void){
    printf("External Linkage var: %d\n", externalLinkageVar); // Accessing external linkage variable

    // This line is commented out to avoid linking error since internalLinkageVar is not defined in this file.
    //printf("Internal Linkage var: %d\n", internalLinkageVar); 

    printf("External Linkage function result: %d\n", externalLinkageFun()); // Accessing external linkage function

    return 0;
}