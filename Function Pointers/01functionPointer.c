/*
Function Pointers
Since pointers can point to an address in any memory location, they can also point to the start of executable code.
Pointers to functions, or function pointers, point to executable code for a function in memory. 
Function pointers can be stored in an array or passed as arguments to other functions.
A function pointer declaration uses the * just as you would with any pointer:
return_type (*func_name)(parameters) 
The parentheses around (*func_name) are important. 
Without them, the compiler will think the function is returning a pointer.
After declaring the function pointer, you must assign it to a function.
The following short program declares a function, declares a function pointer,
assigns the function pointer to the function, and then calls the function through the pointer:
*/

#include <stdio.h>

void say_hello(int num_times); /* function */

int main()
{
    void (*funptr)(int); /* function pointer */
    funptr = say_hello;  /* pointer assignment */
    funptr(3);           /* function call */
    return 0;
}

void say_hello(int num_times)
{
    int k;
    for (k = 0; k < num_times; k++)
        printf("Hello\n");
}