#include<stdio.h>
#include<stdlib.h>

int main(){
    int clm, row;

    printf("Enter a column and row: ");
    scanf("%d %d", &clm, &row);

    int **d_ptr;

    d_ptr = (int **)malloc( row * sizeof(int *));

    for (int i = 0; i < row; i++)
    {
        d_ptr[i] = (int *)malloc( clm * sizeof(int));
    }

    for(int i = 0; i < clm; i++){
        for(int j = 0; j < row; j++){
            d_ptr[i][j] = i+j;
        }
    }
        
    for(int i = 0; i < clm; i++){
        for(int j = 0; j < row; j++){
            printf("%d ", d_ptr[i][j]);
        }
    }

    return 0;
}