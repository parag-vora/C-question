# C language example

A collection of C programs demonstrating basic to advanced concepts.

## Contents
- array pass a call by value.c: 
    - Demonstrate how to pass an array to a function by value by wrapping it inside a structure.
    - Show that changes made to the array inside the function do not affect the original array in main().
    - Compare the array values before and after the function call to verify call-by-value behavior.

- callback pointer.c
    - Demonstrate the callback function.
 
- FAM.c
    - Demonstrate the use of a flexible array member in a C structure to handle variable-length strings.
    - Dynamically allocate memory for the structure plus the string size at runtime and initialize its members.
    - Print the structure details and compare the size of the structure itself versus the allocated memory size.

- self referential structure.c
    - Demonstrate the seld referential structure

- size of arry.c
    - Demonstrate how to pass one-dimensional and two-dimensional arrays to functions in C using different types of pointers.
    - Show the difference between `sizeof` a pointer (which gives the size of the pointer itself) and `sizeof` the dereferenced pointer (which gives the size of the entire array it points to).
    - Print array elements inside functions using appropriate pointer arithmetic and array indexing techniques.
