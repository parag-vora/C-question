#include<stdio.h>
#include<stdarg.h>
#include<string.h>

void stringFunction(int num, ...);

int main(){
    stringFunction(2, "parag", "vora");
    return 0;
}

void stringFunction(int num, ...){
        char arr[100];
        va_list args;
        va_start(args, num);
        for (size_t i = 0; i < num; i++)
        {
            strcat(arr, va_arg(args, char *));
        }
        va_end(args);
        printf("string is: %s", arr);        
}