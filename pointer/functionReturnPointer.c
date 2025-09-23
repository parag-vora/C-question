#include<stdio.h>

int *function(int a, int b){
    static int ptr;
    ptr = a+b;
    return &ptr;
}

int main(){
    int *ptr = function(5,6);
    printf("Function Return value: %d", *ptr);
    return 0;
}