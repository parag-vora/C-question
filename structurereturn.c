// structurereturn.c
// This program demonstrates the use of a struct to return multiple values from a function.

#include<stdio.h>

typedef struct demo{
    int age;
    char *name;
}data;

data getFun(){
    data _x;
    _x.age = 25;
    _x.name = "Hey!";
    
    return _x;
}

int main(){

    data x = getFun();
    printf("Age: %d, Name: %s\n", x.age, x.name);

}