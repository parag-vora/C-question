// File: gotoStatement.c
// This program demonstrates the use of a goto statement to create a simple loop.

#include<stdio.h>
#include<stdint.h>

int main(){
    uint8_t count = 0;

    label: 
            printf("Count is: %d\n", count);
            count++;
            if(count < 5){
                goto label;
            }

     return 0;       
}