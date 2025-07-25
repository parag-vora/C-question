#include<stdio.h>


void nestedFunction(int x, int y){

    auto int add(int a, int b); // Declare the function prototype for add

    printf("Addition of %d and %d is: %d\n", x, y, add(x, y));

    int add(int a, int b){
        return a + b;
    }
}

int main(){

    nestedFunction(5,10);

    return 0;
}
