/*this file demonstrate the to do sum using recursion method insted of iteration*/

#include<stdio.h>
#include<stdint.h>

int recursionFun(int n){
    if(n == 0) return 0;
    else return n+recursionFun(n-1);
}


int main(){
    uint16_t num;
    printf("Enter a number: ");
    scanf("%hu", &num);
    printf("Sum is : %d", recursionFun(num));

    return 0;
}