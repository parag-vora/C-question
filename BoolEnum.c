#include<stdio.h>

enum BoolEnum{
    FALSE, TRUE
};

int main(){


    enum BoolEnum var1 = TRUE;
    enum BoolEnum var2 = FALSE;
    // Uncomment the above lines if you want to use the enum type instead of bool
        
    printf("var1 is %d\n", var1);
    printf("var2 is %d\n", var2);

    printf("var1 is %d\n", (var1 == TRUE) ? TRUE : FALSE);

    if(var1 == TRUE) {
        printf("var1 is true\n");
    } else {
        printf("var1 is false\n");
    }

    return 0;
    
}