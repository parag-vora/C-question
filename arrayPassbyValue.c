#include<stdio.h>

typedef struct {
    int arr[3];
}data;

void fun(data a){
    a.arr[0] = 1;
}

int main(){

    data _data = {.arr[0] = 5, .arr[1] = 10, .arr[2] = 15};

    printf("Array before function call: \n");
    for(int i = 0; i < 3; i++){
        printf("%d ", _data.arr[i]);
    }

    fun(_data);

    printf("\nArray after function call: \n");
    for(int i = 0; i < 3; i++){
        printf("%d ", _data.arr[i]);
    }

}