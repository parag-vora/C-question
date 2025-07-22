// this program prints a greeting message, the current date, and contact information

#include<stdio.h>
#include<stdint.h>

int main(){
char *name = "Hello, world";
char *month = "July";
uint8_t date = 15;
uint16_t year = 2023;

unsigned int contactInfo = 1234567890;

printf("\nName: ");
printf("\t\t%s", name);
printf("\nDate: ");
printf("\t\t%s, %u, %d", month, date, year);
printf("\nContact Info: ");
printf("\t%u", contactInfo);

return 0;
}