
#include<stdio.h>

void fun(char *arr){
    printf("\nPrinting the string from function: ");
    while(*arr != '\0'){
        printf("%c", *arr);
        arr++;
    }
}

int main(){

    char arr[4] = "Hey";
    char *arr1 = "Hello";
    fun(arr);
    fun(arr1);

    return 0;
}