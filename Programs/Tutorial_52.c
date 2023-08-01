// Author : Hash707 
// Date : 18 March 2023
// Purpose : Void Pointers in C (Code with Harry)

#include<stdio.h>
#include<conio.h>

int main(){

    // Void Pointers --> Pointer variable which can point to the address of any variable type
    
    // ----Note-----
    // 1) Void pointers can't be dereferenced directly we have to typecast the result to prevent any error.
    // 2) Also pointer arithematic is not possible on the void poiners and should be avoided.


    int a = 234;
    float f = 34.34;

    void* ptr;   // Creating a void pointer. we can use it to point either to the int variable or to the float variable.
    
    ptr = &a;
    printf("The value of a is %d\n", /*dereferencing operator-->*/*(/*typecasting the pointer-->*/(int *)ptr));
    
    // Now using the ptr to point to a float variable's address.
    ptr = &f;
    printf("The value of f is %f\n", *((float *)ptr));

    return 0;
}