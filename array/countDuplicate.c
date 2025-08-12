#include<stdio.h>
#include<stdlib.h>

int main(){

    int num, count;
    printf("Enter the num of element: ");
    scanf("%d", &num);

    printf("Allocate a dynamic memory\n");
    int *ptr = (int *)malloc(num * sizeof(int));
    if (ptr == NULL)
    {
        printf("Dynamic memory doesn't allocated\n");
        exit(EXIT_SUCCESS);
    }

    printf("Enter the elements \n");
    for (int i = 0; i < num ; i++)
    {
        printf("Enter %d element: ", i+1);
        scanf("%d", (ptr + i));
    }

    for (int i = 0; i < num; i++)
    {
        int temp_num = *(ptr + i);
        for (int j = i; j < num; j++)
        {
            if(i == j) continue;
            if (temp_num == *(ptr + j))
            {
                count++;
            }            
        }        
    }
    
    printf("Total no. of repeat number are %d", count);

    return 0;
}