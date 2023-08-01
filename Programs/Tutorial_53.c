// Author : Hash707
// Date : 19 March 2023
// Purpose : Null Pointers in C (Code with Harry)

#include<stdio.h>

int main(){
    
    // Null pointer --> Is a value of pointer defined by ((void*) 0) i.e the pointer points to Null (nothing)]
    // A Null pointer Can't be dereferenced. 

    int a = 34;

    int* ptr = &a; 
    int* nptr = NULL;

    printf("The value of a is %d\n", *ptr);
    
    if(nptr != NULL){
        printf("The value of nprt is not NULL. The pointer can be dereferenced\n");
    }
    else{
        printf("The value of nprt is NULL. The pointer can't be dereferenced\n"); // Otherwise the program will crash.
    }

   
    printf("Uninitialized pointer can point to any memory address or can be null:\n");
    printf("Here's the example\n");
    for(int i = 0;i<3;i++){

        int* uninitptr;  //An uninitialized pointer can point to any address or to NULL value. Therefore, to be safe we use NULL pointer to make sure that a pointer is null.
        int c = 34;
        printf("For i = %d\n", i);
        if(uninitptr != NULL){
            printf("The uninitptr is pointer to %d.\n", uninitptr);
        }
        else{
            printf("The uninitptr is a NULL pointer.\n");
        }
    }
    
    return 0;
}
