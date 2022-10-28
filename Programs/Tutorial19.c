// Author : Mohammad Arsh Qureshi
// Date : 31th August 2022
// Purpose : Code with Harry tutorial (Functions in C Language)

#include<stdio.h>

int sum(int a, int b);  // Declaration of the function
//return_type function_name(arguments);
int main(){

   int a,b;
   printf("Enter a number:\n");
   scanf("%d", &a);
   printf("Enter another number:\n");
   scanf("%d",&b);

   printf("The sum of the numbers is %d\n", sum(a,b)); // calling of the function

}

int sum(int a, int b){  // Functio  n definition

    int c = a+b;
    return c;

}