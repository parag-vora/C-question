// this code compare two matrix element by element.

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

int main(){
    int row1,row2,column1,column2;
    printf("Enter the rows and column of 1st matrix: ");
    scanf("%u %u", &row1, &column1);
    printf("Enter the rows and column of 2nd matrix: ");
    scanf("%u %u", &row2, &column2);

    int *arr1 = NULL; 
    int *arr2 = NULL;
    printf("Enter the element of 1st matrix: ");
    for (int i = 0; i < row1*column1; i++)
    {
            scanf("%d", (arr1+i));        
    }

    printf("Enter the element of 2nd matrix: ");
    for (int i = 0; i < row2*column2; i++)
    {
            scanf("%d", (arr2+i));        
    }

    printf("\nPrint 1st matrix: \n\r");
    for (int i = 0; i < row1*column1; i++)
    {
            printf("%d ", *(arr1+i));              
    }
    
    printf("\nPrint 2nd matrix: \n\r");
    for (int i = 0; i < row2*column2; i++)
    {
            printf("%d ", *(arr2+i));              
    }
    
    for (int i = 0; i < row1 * column1; i++)
    {
        if(*(arr1+i) != *(arr2+i)){
            printf("\nElements are not same....\n"); 
            return -1;
        } 
        
    }
    
    printf("Both matrix are same...\n");

    free(arr1);
    free(arr2);
    return 0;
}

    