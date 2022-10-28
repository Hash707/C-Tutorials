// Author : Hash707
// Date : 31 August 2022
// Purpose : Code with Harry (Recursions)

#include<stdio.h>

int factorial(int num);

int main(){

int number;
printf("Enter a number to find the factorail of :\n");
scanf("%d", &number);
printf("The factorial of the entered number is : %d\n", factorial(number));

}

int factorial(int num){

    if(num<=1){
        return 1;
    }

    return num*factorial(num-1);

}