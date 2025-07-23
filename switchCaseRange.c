// switchCaseRange.c
// This program demonstrates the use of switch-case with range cases in C.
// Note: Range cases (e.g., case 1 ... 10) are not standard in C,
// but some compilers like GCC support this as an extension.

#include<stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    switch(num)
    {
        case 1 ... 10:
                printf("%d is between 1 to 10", num);
                break;
        case 11 ... 20:
                printf("%d is between 2 to 20", num);
                break;
        default:
                printf("%d is out of 1 to 20", num);       
                break;         
    }
    return 0;

}