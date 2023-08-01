// Author : hash707
// Date : 21 July 2023
// Purpose : Function Pointer in C (code with harry)


#include<stdio.h>


 /*  
    
            --- Pointers ---

        > A pointer is a variable which stores address of anohter variable.
        > & Symbol is used to get the address of the variable.
        > * Symbol is useed to get teh value of the variable that the pointer is pointing to.
        > In C, we can create generic pointers too.
        > Regular C variable stores the value whereas pointer stores the address of the variable.

            --- Function Pointers ---

        > We can have pointers pointing to funcions as well.
        > Function pointers are useful to implement callback functions.
        > Compiler takes one or more source files and convert them to machine code.
        
        > A function pointer stores the address of the instruction in memory from where the function starts.

    
    
    
    */  



int sum(int a, int b){
    return a+b;
}

int main(){

   

    printf("The sum is %d", sum(1,2)); // Testing the function


    // Means that fptr points to a function that retuns a int and has 2 arguments as ints.
    int (*fptr) (int, int); // Declaring the function pointer
    fptr = &sum; // Creating a function pointer
 
    int d = (*sum)(3,4); // Dereferencing a function pointer
    printf("The value of d is %d", d);

    return 0;
}