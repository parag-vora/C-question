#include<stdio.h>

int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int mul(int a, int b){
    return a*b;
}

int div(int a, int b){
    return a%b;
}

void callbackFun(int (*fptr)(int, int), int a_temp, int b_temp){
    printf("%d\n", (*fptr)(a_temp, b_temp));
}

int main(){

    int (*fptr[])(int, int) = {add, sub, mul, div};
    for (size_t i = 0; i < 4; i++)
    {
        callbackFun(fptr[i], 7 , 5);
    }
    
    return 0;
}