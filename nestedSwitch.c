// nestedSwitch.c
// This program demonstrates the use of nested switch statements to handle multiple choices.

#include<stdio.h>
#include<stdint.h>

int main(){
    uint8_t outerChoice = 1;
    uint8_t innerChoice = 2;

    switch(outerChoice)
    {
        case 1:
            printf("outer switch case 1\n");
            switch(innerChoice)
            {
                case 1:
                    printf("inner switch case 1\n");
                    break;
                case 2:
                    printf("inner switch case 2\n");
                    break;
                default:
                    printf("inner switch default case\n");
                    break;          
            }
            break;
        case 2:
            printf("outer switch case 2\n");  
            switch(innerChoice)
            {
                case 1:
                    printf("inner switch case 1\n");
                    break;
                case 2:
                    printf("inner switch case 2\n");
                    break;
                default:
                    printf("inner switch default case\n");
                    break;          
            }
            break;
        default:
            printf("outer switch default case\n");      
    }
}