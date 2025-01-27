// Flexible Array member
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// structure which hold student info as well as structre size
struct Student
{
    int Roll_number;
    int stucture_size;
    int name_length;
    char name[];    // flexible array
};

struct Student *function(int num, char a[]){

// allocate the size of structure + string length
struct Student *info = malloc(sizeof(*info) + sizeof(char) * (strlen(a)+1));

info->Roll_number = num;
info->name_length = strlen(a);
strcpy(info->name,a);
info->stucture_size = sizeof(*info) + sizeof(char) * (strlen(a)+1);
return info;

}

// User defined print function
void printfunction(struct Student *s){
    printf("Student name: %s, Student Roll number: %d, Student name length: %d, structure size: %d\n",
            s->name,
            s->Roll_number,
            s->name_length,
            s->stucture_size);
}


// main function
int main() {

struct Student *s1 = function(123, "Hello");
printfunction(s1);

printf("size of strucure: %u\n", sizeof(struct Student));


return 0;

}

