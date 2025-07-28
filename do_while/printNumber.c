#include<stdio.h>

int main(){
    int num, end_num = 0;

    printf("Enter the number to print from 0: ");
    scanf("%d", &num);

    if(num > 0){
        do
        {
            printf("%d ", end_num);
            end_num++;
        } while (end_num <= num);       
    }
    else {
        do
        {
            printf("%d ", end_num);
            end_num--;
        } while (end_num >= num);
        
    }
       
    return 0;
}