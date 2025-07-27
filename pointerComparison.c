/*
We can compare the two pointers by using the comparison operators in C. We can implement this by using all operators in 
C >, >=, <, <=, ==, !=.  It returns true for the valid condition and returns false for the unsatisfied condition. 
*/

#include<stdio.h>

int main(){
    
    int arr[] = {1,2,3};
    
    int *ptr = arr;
    int *ptr1 = &arr[0];
    if(ptr == ptr1) printf("Both pointer has same address.\n");

    int *ptr2 = &arr[1];
    if(ptr2 > ptr) printf("ptr2 has higher address than ptr.\n");

    return 0;
}