#include<stdio.h>
#include<stdbool.h>
#include<string.h>

typedef struct
{
    char ID[6];
    int password;
}Author; 

int adminAccess(Author *temp_ptr){
    char _id[6];
    int _password;
    printf("Enter admin ID and password: \n");
    scanf("%s %d", _id, &_password);
    if(!strncmp(_id, temp_ptr->ID, 6) && _password == temp_ptr->password) {
        return 1;
    }
    else {
        return 0;
    }
} 

int updateValue(){
    int decision;
    static int number;
    printf("Do you want to change value or use a default value (1. Yes, 2. No)\n");
    scanf("%d", &decision);
    switch (decision)
    {
    case 1:
        printf("Enter a Number: ");
        scanf("%d", &number);
        break;
    case 2:
        number = 24;
        break;    
    default:
        break;
    }
    return number;
}

int main(){
    int guessNum;
    Author a1 = {.ID = "admin", .password = 123};
    Author *s_ptr = &a1;
    while(!adminAccess(s_ptr)){
        printf("Wrong information\n");
    }
    const int num = updateValue();

    do{
        printf("Guess the Number: ");
        scanf("%d", &guessNum);
    }while(guessNum != num);

    return 0;

}