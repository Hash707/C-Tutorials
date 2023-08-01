// Author : Hash707
// Date : 19 March 2023
// Purpose : Wild Pointer in C (Code with Harry)

#include<stdio.h>
#include<conio.h>

int main(){

    int a = 3432;
    int* ptr;  // ptr --> Wild pointer (pointer that is not initialized)
    
    /* NOTE NOTE NOTE NOTE */
    //*ptr = 23; ---->  Bad pratice --> storing the value to the garbage memory address (THIS IS NOT A GOOD THING TO DO)

    ptr = &a;  // ptr --> No longer a wild pointer as it points to the address of a.
    printf("The value of a is %d", *ptr);
    return 0;
}