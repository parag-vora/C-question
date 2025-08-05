#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include<string.h>

void strFun(char *str);

int main(){

    char str[20];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    printf("Entered string: %s\n", str);
    strFun(str);
    printf("Reverse string: %s\n", str);
    return 0;
}

void strFun(char *str){

    uint8_t size = strlen(str);

    char *l_ptr = (char *)malloc(size * sizeof(char));
    if(l_ptr == NULL){
        printf("Dynamic memory has been not allocate\n");
        exit(EXIT_SUCCESS);
    }
    for (uint8_t i = 0; i < size; i++)
    {
        *(l_ptr + i) =  *(str + (size - 1- i));
    }

    *str = *l_ptr;
    free(l_ptr);
}