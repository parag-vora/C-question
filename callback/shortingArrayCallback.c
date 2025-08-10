#include<stdio.h>

void ascendingFun(int arr[], int size){
    int n_arr[size];
    int minNum = arr[0], maxNum = arr[0];
    for (int i = 1; i < size; i++)
    {
        if(arr[i] < minNum) {
            minNum = arr[i];
        }
        if(arr[i] > maxNum){
            maxNum = arr[i];
        }
    }

    n_arr[0] = minNum;
    n_arr[size-1] = maxNum;
    
    for (int i = 1; i < size-1; i++)
    {
        
    }
    
    
}

int main(void){
    int num;
    int arr[20];
    printf("Enter a number of array element: ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("Enter the %d element: ", i+1);
        scanf("%d", arr[i]);
    }

    ascendingFun(arr, num);
    
    

    return 0;
}