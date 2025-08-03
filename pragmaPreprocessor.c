#include<stdio.h>

void func1() __attribute__((constructor));
void func2() __attribute__((destructor));


void func1(){
    printf("start function\n");
}

void func2(){
    printf("end function\n");
}

int main(){

    printf("main function\n");

    return 0;
}