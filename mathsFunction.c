// mathsFunction.c
// This file contains basic mathematical functions using the C17 standard.

#include<stdio.h>
#include<math.h>

#define M_PI 3.14159265358979323846

int main(){

    printf("Square root of 16 is: %.2f\n", sqrt(16.0));
    printf("Cube root of 27 is: %.2f\n", cbrt(27.0));
    printf("Power of 2 raised to 3 is: %.2f\n", pow(2.0, 3.0));
    printf("Sine of 30 degrees is: %.2f\n", sin(30.0 * M_PI / 180.0));
    printf("Integer Number: %.2f\n", floor(3.7));
    printf("Integer Number: %.2f\n", ceil(3.7));

    return 0;
}