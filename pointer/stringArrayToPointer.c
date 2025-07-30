
#include<stdio.h>

void fun(char *arr){
    printf("\nPrinting the string from function: ");
    while(*arr != '\0'){
        printf("%c", *arr);
        arr++;
    }
}

void fun1(char** arr, int size){
    for (int i = 0; i < size; i++)
    {
        printf("\n%s", arr[i]);
    }
    
}
int main(){

    char arr[4] = "Hey";
    char *arr1 = "Hello";
    char *arr2[3] = {"Hey", "Hello", "Moin"};
    fun(arr);
    fun(arr1);
    fun1(arr2, sizeof(arr2)/sizeof(arr2[0]));

    return 0;
}