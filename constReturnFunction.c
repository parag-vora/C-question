 #include<stdio.h>
 #pragma (pack)

 //#define CONST   // uncomment this macro in order to check the functionality of "const" function return type. it will not allow change value because it is in read-only memory.
 
typedef struct
{
    int _rollNumber;
    char* _name;
    int _age;
    char _classroom;

}studentdata;

const studentdata* InitializeFun(){
    static studentdata _temp;
    _temp._rollNumber = 5;
    _temp._name = "ABC";
    _temp._age = 20;
    _temp._classroom = 'A';
     
    return &_temp;
}

 int main(){

    const studentdata *s1 = InitializeFun();

    printf("____Student Data____ \n");
    printf(" Roll Number : %d\n Name: %s\n Age: %d\n Classroom: %c\n", s1->_rollNumber, s1->_name, s1->_age, s1->_classroom);
   
    #ifdef CONST
    s1->_age = 15;

    #endif

    return 0;
 }