#include<stdio.h>
#include<string.h>

typedef void(*FPTR)(char *);
typedef char* CPTR;
typedef int INTEGER;
typedef char CHARACTER;

void Uppercase(CPTR str){
    while(*str != '\0'){
        if(*str >= 65 &&  *str <= 90){
            printf("%c", *str);
        } else {
            printf("%c", *str - 32);
        }
        str++;
    }
}

void Lowercase(CPTR str){
        while(*str != '\0'){
        if(*str >= 97 &&  *str <= 122){
            printf("%c", *str);
        } else {
            printf("%c", *str + 32);
        }
        str++;
    }
}

void fun(FPTR fptr, CPTR str){
        (fptr)(str);
}

int main(){
    INTEGER choice;
    CHARACTER ptr[20];
    FPTR fptr = NULL;
    printf("Enter a string: ");
    scanf("%s", ptr);
    printf("Enter your choice 1. Lowercase 2. Uppercase : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        fptr = Lowercase;
        break;
    case 2:
        fptr = Uppercase;
    default:
        break;
    }

    fun(fptr, ptr);
    return 0;
}