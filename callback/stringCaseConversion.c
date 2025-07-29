#include<stdio.h>
#include<string.h>

void Uppercase(char *str){
    while(*str != '\0'){
        if(*str >= 65 &&  *str <= 90){
            printf("%c", *str);
        } else {
            printf("%c", *str - 32);
        }
        str++;
    }
}

void Lowercase(char *str){
        while(*str != '\0'){
        if(*str >= 97 &&  *str <= 122){
            printf("%c", *str);
        } else {
            printf("%c", *str + 32);
        }
        str++;
    }
}

void fun(void (*fptr)(char *), char *str){
        (fptr)(str);
}

int main(){
    void (*fptr)(char *) = Uppercase;
    char *ptr = "hello";
    fun(fptr, ptr);
    return 0;
}