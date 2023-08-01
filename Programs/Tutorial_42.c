// Author : Hash707
// Date : 23 FEB 2023
// Purpose : Static Variables in C (Code with Harry)

#include<stdio.h>
#include<conio.h>

// Memory is allocated to the static variables before the execution of the main function, therefore they only accept the constant valeus. eg: static int num = 34;

// The state of a static variable is also stored whether its in scope or not

static int globalint = 105;

void staticint(){

    static int num = 23;
    printf("The value of the static int 'num' is %d\n", num);   
    num++;
    globalint++;

}

void ordinaryint(){
    int yum = 23;
    printf("The value of the ordinary int 'yum' is %d\n", yum);
    yum++;
}

int main(){

    printf("First Call\n"); // 23 will be printed and the value is changed to 24;
    staticint();            // Previous state i.e. 24 is stored and is printed and the value is furhter changed to 25;

    globalint = 340;
   
    
    printf("Second Call\n");// 24 will be printed
    staticint();
    
    printf("\n\nThe value of the globalint is %d\n\n", globalint);

    printf("Third Call\n");// 25 will be printed
    staticint();


    // Ordinary Variable
    printf("\n\n\tFor the ORDINARY VARIABLE\n\n");

    printf("First Call\n");// 23 will be printed and the value is changed to 24;
    ordinaryint();

    printf("Second Call\n");// Again the value of the 'yum' --> 23 and is changed to 24, thus again 23 is printed
    ordinaryint();

    
}