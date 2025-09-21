#include<stdio.h>
#include<stdint.h>

struct pointerToStructure
{
    char *name;
    uint8_t age;
}details = {.name = "Hello", .age = 5}, *structPtr = &details;


int main(){

    printf("Name : %s\nAge : %u", details.name, details.age);
    return 0;
}