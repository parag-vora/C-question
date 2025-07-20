#include<Stdio.h>

#define TRUE 1
#define FALSE 0

int main(){

    int var1 = TRUE;
    int var2 = FALSE;

    printf("var1 is %d\n", var1);
    printf("var2 is %d\n", var2);

    printf("var1 is %d\n", var1 ? TRUE : FALSE);

    if(var1) {
        printf("var1 is true\n");
    } else {
        printf("var1 is false\n");
    }   

    return 0;
}