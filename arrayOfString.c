/*
We have 2 rows and 10 columns specified in our array of string which means that each string can be as long as 10
characters. But as we can see, there are many strings that takes less space than 10 but still allocated the same space due
to the property of 2D array. It leads to so much wastage of space. But we can avoid this wastage in our program by using 
array of pointers to strings.
*/


#include<stdio.h>

int main(){
    
    char arr[2][10] = {"hello", "world"};

    for(int i = 0; i < 2; i++){
        printf("arr[%d]: %s \n", (i+1), arr[i]);
    }

    return 0;

}