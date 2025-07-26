#include<stdio.h>


void fun(int *arr, int dim1, int dim2, int dim3){
    for(int i = 0; i < dim1; i++){
        for(int j = 0; j < dim2; j++){
            for(int k = 0; k < dim3; k++){
                printf("%d ", *(arr + i * dim2 * dim3 + j * dim3 + k));
            }
            printf("\n");
        }
    }    
}

int main(){

    int arr[2][2][4] = {1,2,3,4,
                      5,6,7,8,
                      9,10,11,12,
                      13,14,15,16}; 

    fun(arr, 2,2,4);

     return 0;                 
}