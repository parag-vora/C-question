#include<stdio.h>
#include<stdlib.h>

int main(){
    int clm;

    printf("Enter a number of column: ");
    scanf("%d", &clm);
    int *ptr;
    ptr = (int *)malloc( clm * sizeof(int));

    for(int i = 0; i < clm ; i++){
        ptr[i] = i+1;
    }

    for (int i = 0; i < clm; i++)
    {
        printf("%d ", ptr[i]);
    }

    return 0;
    
}