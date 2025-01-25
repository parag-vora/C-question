// pass the array as a call by value insted of call by reference
#include <stdio.h>
#include <stdlib.h>
#define size 3

// array is wrapped into structure
struct arr_structure{

int arr[size];

};

void fun(struct arr_structure obj1){

// print the array same as a array in main function
printf("\narray print in function\n");
for (int i = 0; i < size; i++)
{
    printf("%d ", obj1.arr[i]);
}

// change the value of array
for (int i = 0; i < size; i++)
{
    obj1.arr[i] = i+3;
}

// print the array after change 
printf("\nchange value of array in function and then print\n");
for (int i = 0; i < size; i++)
{
    printf("%d ", obj1.arr[i]);
}

}


int main() {

struct arr_structure obj;

for (int i = 0; i < size; i++)
{
    obj.arr[i] = i;
}

// print the array
printf("\nArray before in main function\n");
for (int i = 0; i < size; i++)
{
    printf("%d ", obj.arr[i]);
}

// call the function and pass the structure obj
fun(obj);

// print the array after change array in user defined function 
printf("\nArray after in main function\n");
for (int i = 0; i < size; i++)
{
    printf("%d ", obj.arr[i]);
}

    return 0;
}


