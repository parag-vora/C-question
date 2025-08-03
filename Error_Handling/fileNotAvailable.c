#include<stdio.h>
#include<errno.h>
#include<stdlib.h>

#define WITH_ERRNO  // define this macro to check the functionality of errno(global variable for error define in errno.h)
#define WITH_GOTO   // define this macro to check the functionality of goto 

int main(){
    
    #ifndef WITH_ERRNO

    FILE *fptr = fopen("hello.txt", "r");
    if(fptr == NULL){
        printf("File can't open or doesn't exit\n");
        #ifdef WITH_GOTO
            goto exit;
        #endif    
        return 1;
    } else {
        printf("File open successful\n");
        FILE *fptr = fclose("hello.txt");
        if(fptr = NULL) {
            printf("File doesn't successfully closed\n");
            #ifdef WITH_GOTO
                goto exit;
            #endif   
            return 1;
        } 
        else{
            printf("File close successfully closed\n");
        }    
    }

    #endif

    #ifdef WITH_ERRNO

    FILE *fptr = fopen("hello.txt", "r");
    if(fptr == NULL){
        printf("value of errno: %d\n", errno);
        perror("Error message ");
        #ifdef WITH_GOTO
            goto exit;
        #endif  
        exit(EXIT_FAILURE); 
    } else {
        printf("File open successful\n");
        FILE *fptr = fclose("hello.txt");
        if(fptr = NULL) {
            printf("Value of errno: %d\n", errno);
            printf("Error message : %s\n", strerror(errno));
            #ifdef WITH_GOTO
            goto exit;
            #endif   
            exit(EXIT_FAILURE);
        } 
        else{
            printf("File close successfully closed\n");
        }    
    }


    #endif

#ifdef WITH_GOTO

exit:   printf("Exit with goto");
        return 1;

#endif


   return 0;
}