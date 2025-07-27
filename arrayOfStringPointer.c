/*
Unlike the 2D array of characters, array of pointer to strings store the pointer to the array. So, each string is only take the
required amount of memory. Though some extra space is required to store the pointers.
*/

#include<stdio.h>

int main(){
    char *arr[] = {"hello", "world"};

    for(int i = 0; i < 2; i++){
        printf("arr[%d]: %s \n", (i+1), arr[i]);
    }

    return 0;
}