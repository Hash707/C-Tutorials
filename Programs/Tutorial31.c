// Author : Hash707
// Date : 06 September 2022
// Purposer : Code with Harry (Call by Value and Call by Reference)

#include<stdio.h>

void func1(int a){     // value of x <--> copied into a
    a += 1;
    printf("The value of address (%p) i.e a  = %d\n", &a, a);
}

void func2(int * b){   // address of y <--> copied into address of b
    *b += 1;
     printf("The value of address (%p) i.e b  is : %d\n", b, *b);
}

int main(){
    int x = 23, y = 56; 

    printf("\n\n\tThe call by Value Function is called\t\n\n");
    printf("\nThe value of address (%p) i.e x is : %d\n", &x, x);
    // Calling the func1 --> Call by Value Function
    func1(x);

    printf("\n\n\tThe call by Reference Function is called\t\n\n");
    
    printf("The value of address (%p) i.e y is : %d\n", &y, y);
    // Calling the func2 --> Call by Reference Function
    func2(&y);
    

    return 0;
}