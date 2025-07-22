// this file checks the C language standard version being used
// It prints the version if it matches C99, C11, C17, or C23

#include<stdio.h>

int main(){
    #ifdef  __STDC_VERSION__ 
    double version = __STDC_VERSION__;

    if(version == 199901){
        printf("C99 standard is being used.\n");
    } else if(version == 201112){
        printf("C11 standard is being used.\n");
    } else if(version == 201710){
        printf("C17 standard is being used.\n");
    } else if(version = 202311) {
        printf("C23 standard is being used.\n");
    } else {
        printf("Unknown C standard version: %.0f\n", version);
    }
    #endif
    return 0;

}