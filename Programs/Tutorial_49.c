// Author : Hash707
// Date : 16 March 2023
// Purpose : Storage Classes in C (Code with Harry)

#include<stdio.h>
#include<stdlib.h>
#include"Tutorial_Extern.c"  // We can use all the methods and variables of the 'Tutorial_Extern.c' file in this file.

int sum = 34; // Global or External Variable (scope - throughout the program)
int a = 56;

int myfunc(){
    int sum ; // Auto or Local Variable (scope - within the declared function)
    return sum; 

}

int externFunc(){

    extern int a;  // The global variable 'a' is used here.  
    return a;
}


int main(){

    // Declaration -  Telling the compiler about the variable (No space reserved)
    // Definition - Declaration + Space reservation

    // The Register Variable --> For frequently used variable as the variable is stored in the register memory thus faster to access
    register int fast = 563;
    printf("This is the register variable:\n");
    printf("%d", fast);

    printf("\nThis is a variable from another file:\n");
    printf("%d", other);

    int b = externFunc();
    printf("\nUsing the extern Keyword:\n");
    printf("a = %d", b);

    int c = myfunc();
    printf("\nWithout using the extern Keyword:\n");
    printf("sum = %d", c);  // garbage value is printed as the initial value of a local variable is --> garbage value;

    return 0;
}