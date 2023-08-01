// Author : hash707
// Date : 21 July 2023
// Pupose : Using function pointers in C (code with harry)


#include<stdio.h>
#include<stdlib.h>

/*
        --- Function Pointer ---
    
    > We can have pointer pointing to functions as well.
    > Function pointers point to code and not data.
    > Function pointers are useful to implement callback functions.
    > Unlike normal pointers, we do not allocate de-allocate memory using function pointers.



        --- Callback Functions (passing a function to another function)---

    > Function pointers are used to pass a function to a function.
    > This passed function can then be called again (hence the name callback function).
    > This provides programmer to write less code to do more stuff.



*/

void greet(){
    printf("This is a greeting message.");
}


int sum(int a, int b){
    return a+b;
}

void greetAgain(int(*fptr)(int,int)){
    printf("Greeting massage again.\n");
    printf("The sum of 5 and 3 is %d\n", fptr(5,7));
}


int main(){


    int (*ptr)(int, int);
    ptr = sum;
    greetAgain(ptr);
    return 0;
}