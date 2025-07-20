// File: main_with_CLA.c
// This file demonstrates the use of command line arguments in C.


#include<stdio.h>

int main(int argc, char *argv[]){
    printf("number of arguments: %d\n", argc);

    for(int i = 0; i < argc; i++){
        printf("argument %d: %s\n", i, argv[i]);
    }
    return 0; 
}