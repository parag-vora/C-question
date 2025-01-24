// main.c
#include <stdio.h>
#include <stdlib.h>

void fun(){
    printf("hello world\n");
}

int *ptr_fun(){

    static int arr[] = {1,2,3};

    return arr;
}

void callback(void (*ptr)()){

    ptr();
}

void ptr_callbakc(int (*(*ptr1)())){

    int *arr1 = ptr1();

    printf("%d ", *(arr1+1));

}

int main() {

void (*ptr)() = &fun;

int (*(*ptr1)()) = &ptr_fun;

callback(ptr);

ptr_callbakc(ptr1);

    return 0;
}


