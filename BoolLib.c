// this is a simple C program that demonstrates the use of boolean values
// in C using the stdbool.h header file

#include<stdio.h>
#include<stdbool.h>

int main(){
    bool var1 = true;
    bool var2 = false;

    printf("var1 is %d\n", var1);
    printf("var2 is %d\n", var2);

    printf("var1 is %d\n", var1 ? true : false);

    if(var1) {
        printf("var1 is true\n");
    } else {
        printf("var1 is false\n");
    }   

}