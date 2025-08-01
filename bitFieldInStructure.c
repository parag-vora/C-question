#include<stdio.h>

// Structure date1 is without bitfield 
struct date1{
    unsigned int day;
    unsigned int month;
    unsigned int year;
};

/*Structure data2 is with bitfield. becaue i know the maximum value in 
"day" is 31 so 5, bit is enough
"month" is 12 so, 4 bit is enough
"year" is 2025 so, 11 bit is enough 
*/

struct date2{
    unsigned int day : 5;
    unsigned int month : 4;
    unsigned int year : 11;
};

int main(){

    struct date1 _d1 = {1, 8, 2025};
    struct date2 _d2 = {1, 8, 2025};
    
    printf("size of structure date1 without bit field: %d\n", sizeof(_d1));
    printf("Data : %d/%d/%d\n", _d1.day, _d1.month, _d1.year);
    printf("Address of day: %p\n", &_d1.day);
    printf("Address of month: %p\n", &_d1.month);
    printf("Address of year: %p\n", &_d1.year);

    printf("size of structure date2 with bit field: %d\n", sizeof(_d2));
    printf("Data : %u/%u/%u\n", _d2.day, _d2.month, _d2.year);

    /* this thing is not possible in bitfield:
        1. can't find to any address
        2. if assign value goes more than, data type bit then through an error
        3. if a bitfield with zero add, then it tell the compiler to align a next value with boundary
    */


}