#include<stdio.h>


int main(){

    int a = 5;
    int *int_ptr = &a;

    char b = 'b';
    char *char_ptr = &b;

    *int_ptr = (int)*char_ptr;
    printf("int_ptr : %d", *int_ptr);

    return 0;
}