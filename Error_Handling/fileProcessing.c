#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

int main(){

    FILE *fptr = fopen("hello.txt", "w");
    if(fptr == NULL){
        printf("File can't created\n");  
        return 1;
    } else {
        printf("File created successfully\n");
        fprintf(fptr, "Hello world");
        fclose(fptr);
     
    }   

    FILE *ptr = fopen("hello.txt", "r");
    do{
        char c = fgetc(ptr);
        if(feof(ptr)){
            break;
        }
        printf("%c", c);
    }while(1);

    FILE *cptr = fclose(ptr);
    if(cptr = NULL) {
        printf("\nFile doesn't successfully closed\n");  
        return 1;
    } 
    else{
        printf("\nFile close successfully\n");
    }    
    

return 0;
}   