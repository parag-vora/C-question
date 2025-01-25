#include <stdio.h>
#define size 3

typedef struct demo
{
    int a;
    struct demo *ptr; //self referential structrure
}str;


// main function
int main() {

str var1 = {5, NULL};  // Initialize structure with NULL pointer
str var2 = {10, NULL}; // Initialize structure with NULL pointer

var1.ptr = &var2;
str *ptr1 = &var1;

printf("member of var2(var2.a): %d", ptr1->ptr->a);  // Deferencing ptr1 to ptr

return 0;

}

