#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

int main(){

    int num, temp_cnt = 0;
    uint16_t even_sum, odd_sum;
    printf("Enter the number total number: ");
    scanf("%d", &num);
    if(num <= 0) return 0;
    int *ptr = (int *)malloc(num * sizeof(int));
    if(ptr == NULL){
        printf("Dynamic memory has been not allocated \n");
        exit(0);
    }
    printf("Dynamic memory for the %d integer digit array has been allocatd now enter the digit: \n", num);
    
    do
    {
        scanf("%d", (ptr+temp_cnt));
        temp_cnt++;
    } while (temp_cnt < num);

    temp_cnt = 0;
    even_sum = 0;
    odd_sum = 0;
    do
    {
        if(*(ptr + temp_cnt) % 2 == 0) even_sum += *(ptr + temp_cnt);
        else odd_sum += *(ptr + temp_cnt);
            
        temp_cnt++;
    } while (temp_cnt < num); 
    
    printf("sum of even number: %d\n", even_sum);
    printf("sum of odd number: %d\n", odd_sum);


    return 0;
}
