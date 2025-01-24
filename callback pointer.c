// main.c
#include <stdio.h>
#include <stdlib.h>

void fun(){     // function return type void
    printf("hello world\n");
}

int *ptr_fun(){   // function return integer pointer

    static int arr[] = {1,2,3};

    return arr;
}

void callback(void (*ptr)()){  // normal callback

    ptr();
}

void ptr_callbakc(int (*(*ptr1)())){  // callback function accept pointer of interger pointer function

    int *arr1 = ptr1();

    printf("%d ", *(arr1+1));

}

int main() {

void (*ptr)() = &fun;    // function pointer

int (*(*ptr1)()) = &ptr_fun;  // function pointer of function which return integer pointer

callback(ptr);   // call the callback function

ptr_callbakc(ptr1);    // call the callback function

    return 0;
}


