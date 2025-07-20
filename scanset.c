#include<stdio.h>

int main(){
    char str[100];

    // can read only uppercase letters A-Z
    // using %[A-Z] format specifier
    printf("enter only [A-Z] string: ");
    scanf("%[A-Z]s", str);
    printf("you entered: %s\n", str);

    /*
    // can read only lowercase letters a-z
    // using %[a-z] format specifier    
    printf("enter only [a-z] string: ");
    scanf("%[a-z]s", str);
    printf("you entered: %s\n", str);
    */

    /*
    // can read only digits 0-9
    // using %[0-9] format specifier
    printf("enter only [0-9] string: ");
    scanf("%[0-9]s", str);
    printf("you entered: %s\n", str);
    */

    /*
    // can read only alphanumeric characters a-z, A-Z, 0-9
    // using %[a-zA-Z0-9] format specifier
    printf("enter only [a-zA-Z0-9] string: ");
    scanf("%[a-z,A-Z,0-9]s", str);    
    printf("you entered: %s\n", str);
    */

    /*
    // can read any string until newline character
    // using %[^\n] format specifier
    printf("enter any string: ");
    scanf("%[^\n]s", str); // can read until newline character
    printf("you entered: %s\n", str);
    */

    return 0;
}