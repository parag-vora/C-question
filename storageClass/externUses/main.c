#include<stdio.h>

int i = 5;

extern void fun(void);

int main(){

    printf("Before change: %d\n", i);
    fun();
    printf("After change: %d\n", i);

    return 0;
}