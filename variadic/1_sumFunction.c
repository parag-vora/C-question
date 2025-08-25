#include<stdio.h>
#include<stdarg.h>

int sumFunction(int num,...);

int main(){

    printf("Sum is : %d\n", sumFunction(4,5,10,-5,23));
    printf("Sum is : %d\n", sumFunction(8,-2,20,-13,8,25,10,27,13));
    
    return 0;
}

int sumFunction(int num, ...){
    va_list args;
    va_start(args, num);
    int sum = 0;
    for (size_t i = 0; i < num; i++)
    {
        sum += va_arg(args, int);
    }
    va_end(args);
    return sum;
}