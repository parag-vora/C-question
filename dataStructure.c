#include<stdio.h>

struct info{
    int num;
    struct info *next_data;
    struct info *last_data;
}; 

int main(){

    struct info _d1;
    _d1.num = 10;
    _d1.last_data = NULL;
    _d1.next_data = NULL;

    struct info _d2;
    _d2.num = 20;
    _d2.last_data = NULL;
    _d2.next_data = NULL;

    struct info _d3;
    _d3.num = 30;
    _d3.last_data = NULL;
    _d3.next_data = NULL;

    _d1.next_data = &_d2;
    _d2.next_data = &_d3;

    _d3.last_data = &_d2;
    _d2.last_data = &_d1;

    printf("member of _d1 \n");
    printf("_d1.num : %d\n", _d1.num);
    printf("_d1.next_data : %d\n", _d1.next_data->num);
    printf("member of _d2 \n");
    printf("_d2.num : %d\n", _d2.num);
    printf("_d2.next_data : %d\n", _d2.next_data->num);
    printf("_d2.last_data : %d\n", _d2.last_data->num);
    printf("member of _d3 \n");
    printf("_d3.num : %d \n", _d3.num);
    printf("_d3.last_data : %d\n", _d3.last_data->num);
}