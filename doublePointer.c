#include<stdio.h>

int main(){

    int a = 5;
    int *ptr = &a;
    int **d_ptr = &ptr;

    printf("value by variable: %d\n", a);
    printf("value by pointer : %d\n", *ptr);
    printf("value by double pointer: %d\n", **d_ptr);

    printf("address of a : %p\n", &a);
    printf("address of a : %p\n", ptr);
    printf("address of a : %p\n", *d_ptr);

    printf("address of ptr : %p\n", &ptr);
    printf("address of ptr : %p\n", d_ptr);

    printf("address of d_ptr : %p\n", &d_ptr);
    return 0;
}