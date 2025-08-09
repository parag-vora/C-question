#include<stdio.h>

int main(){
    register int x = 0;

    printf("Value in Register: %d\n", x);
    
    //printf("Address of register: %p", &x); // this will throw an error because CPU register doesn't have register

    //CPU register can store instruction, address and data
    int a = 5;
    register int *p = &a;
    printf("Value in Register: %d\n", *p);

    //printf("Address of Register: %p", &p); //thi will throw an error because, here CPU register has the address but it doesn't have any address.

    return 0;
}