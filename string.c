#include<stdio.h>

int main(){

    char arr[] = "hello world";
    char *ptr = arr;

    while(*ptr != '\0'){
        printf("%c", *ptr);
        ptr++;
    }
    
    return 0;
}