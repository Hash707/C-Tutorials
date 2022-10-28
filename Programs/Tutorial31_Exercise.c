// Author : Hash707
// Date : 06 September 2022
// Purpose : Code with Harry (Tutorial 31 Exercise : Call by Reference)

// Add and Subtract two numbers and assign them to the results repectively
// i.e. A = A+B and B = B-A;
#include<stdio.h>

void addNSubtract(int * a, int * b){


  *a = *a+=*b;
  *b = *b-(*a-*b);


}

void swap(int * x, int * y){   // Swappin two numbers --> Call By Reference
 

  *x = *x + *y;
  *y = *x - *y;
  *x = *x - *y;

  
}

int main(){
  
  int a = 4, b = 6;

  printf("a = %d and b = %d\n", a,b);
  printf("After calling the function: a=(a+b) and b=(b-a)\n");
  addNSubtract(&a, &b);
  printf("a = %d and b = %d\n", a,b);

  int num1 = 34;
  int num2 = 403;

  printf("num1 = %d and num2 = %d\n", num1,num2);
  printf("After swapping the values:\n");
  swap(&num1, &num2);
  printf("num1 = %d and num2 = %d\n", num1,num2);

}