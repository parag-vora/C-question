#include<stdio.h>
#include<stdlib.h>

int main(){

    int num;
    printf("Enter the number of element: ");
    scanf("%d", &num);
    int *ptr = (int *)malloc(num * sizeof(int));
    if(ptr == NULL){
        printf("Dynamic memory has been not allotcated\n");
        exit(EXIT_SUCCESS);
    }

    printf("Enter Array Elements\n");
    for(int i = 0; i < num; i++){
        printf("Enter %d element: ", (i+1));
        scanf("%d", (ptr+i));
    }

    int *s_ptr = (int *)malloc(sizeof(int) * num);

    printf("Array copied\n");
    for (int i = 0; i < num; i++)
    {
        *(s_ptr + i) = *(ptr + i);
        printf("%d ", *(s_ptr + i));
    }

    free(s_ptr);
    free(ptr);

    s_ptr = NULL;
    ptr = NULL;
     

    return 0;
}