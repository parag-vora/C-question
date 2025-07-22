// File: moduloApplication.c
// This program finds all integers in a given range that leave a remainder of 2 or 3 when divided by 7.
#include<stdio.h>

int main(){
    unsigned int a,b;
    printf("enter first positive integers: ");
    scanf("%u", &a);
    printf("enter second positive integers: ");
    scanf("%u", &b);

    for(int i = a; i <=b; i++){
        if(i%7 == 2 || i%7 == 3){
            printf("%d \n", i);
        }
    }
}