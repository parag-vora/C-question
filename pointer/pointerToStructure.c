#include<stdio.h>
#include<stdint.h>

struct pointerToStructure
{
    char *name;
    uint8_t age;
}details = {.name = "Hello", .age = 5}, *structPtr = &details;


int main(){
    printf("Student details via structure: \n");
    printf("Name : %s\nAge : %u\n", details.name, details.age);
    printf("Student details via pointet to structure: \n");
    printf("Name: %s\nAge : %u\n", structPtr->name, structPtr->age);
    return 0;
}