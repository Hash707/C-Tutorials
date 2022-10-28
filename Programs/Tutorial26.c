// Author : Hash707
// Date : 31 August 2022
// Purpose : Code with Harry (Pointers in C language)

#include<stdio.h>
void main(){
 
int a = 23;  // Variable a stores --> 23;
int* ptra = &a;  // Variable ptra stores --> address of a variable (eg: 0x2A3F, hexa code)

printf("The value of the a variable : %d\n", a);
printf("The value of address of pointer p : %d == Value stored at that address.\n", *ptra);
printf("The value of the variable ptra : %p\n", ptra);
printf("The value of the address of a : %p\n", ptra);
printf("The address of the address variable ptra is %p\n", &ptra);

// &a and ptra have same format specifier (Because both the values are of address type);


// NULL Pointers

int *ptr2;
int*ptr3;
int *ptr4 = NULL;
printf("The address of some garbase is %p\n", ptr2);
printf("The address of some another garbage is %p\n", ptr3);
printf("The address of some another another garbage is %p\n", ptr4);

// Uses of NULL Pointer --> By Default a address is given to any pointer, thus to prevent this we use NULL Pointer in C language.

}