#include<stdio.h>

int main(){

    printf("Line is : %d\n", __LINE__);
    printf("File name : %s\n", __FILE__);
    printf("Time : %s\n", __TIME__);
    printf("Date : %s\n", __DATE__);
    printf("Compiler version: %d\n", __STDC_VERSION__);
    printf("Function name : %s\n", __FUNCTION__);

    return 0;
}