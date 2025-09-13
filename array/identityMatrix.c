// This code check wether the given matrix is identity matrix or not

#include<stdio.h>
#include<stdint.h>

int main(){
    uint8_t row, column;
    printf("Enter the number of rows: ");
    scanf("%hhu", &row);
    printf("Enter the number of column: ");
    scanf("%hhu", &column);
    int arr[row][column];

    for (uint8_t i = 0; i < row; i++)
    {
        for (uint8_t j = 0; j < column; j++)
        {
            printf("arr[%hhu][%hhu]: ", i, j);
            scanf("%d", &arr[i][j]);
        }        
    }
    
    printf("print matrix: \n");
    for (uint8_t i = 0; i < row; i++)
    {
        for (uint8_t j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        
        printf("\n");
    }

    for (uint8_t i = 0; i < row; i++)
    {
        for (uint8_t j = 0; j < column; j++)
        {
            if(!(((i == j) && (arr[i][j] == 1)) || ((i != j) && (arr[i][j] == 0)))){
                printf("Matrix is not identity Matrix\n");
                return -1;
            }
        }
    }
    
    printf("Matrix is identity Matrix\n");

    return 0;
}