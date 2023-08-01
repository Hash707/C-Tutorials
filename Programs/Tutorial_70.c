// Author : hash707
// Date : 11 July 2023
// Purpose : Command Line Calculator in C (Code with Harry)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

    char* operator;
    operator = argv[1];

    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);
    
    printf("The result is : ");
    // strcmp returns 0 if the strings are equal.
    if(strcmp(operator, "add") == 0){
       printf("%d\n", (num1 + num2));
    }

    else if(strcmp(operator, "sub") == 0){
       printf("%d\n", (num1 - num2));
    }

     else if(strcmp(operator, "mul") == 0){
       printf("%d\n", (num1 * num2));
    }

    
    else if(strcmp(operator, "div") == 0){
       printf("%d\n", (num1 / num2));
    }

    else{
        printf("Invalid Operator");
    }


    return 0;
}