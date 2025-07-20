// File: linkage/internal.c
// This file contains a variable with internal linkage.
//


#include <stdio.h>
#include "data.c"

int main(void){
    printf("Internal Linkage var: %d", internalLinkageVar); // Accessing internal linkage variable
    printf("\nInternal Linkage function result: %d", internalLinkageFun()); // Accessing internal linkage function

    return 0;
}