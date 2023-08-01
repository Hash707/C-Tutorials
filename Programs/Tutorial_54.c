// Autor : Hash707   
// Date : 19 March 2023
// Purpose : Dangling Pointers in C (Code with Harry)

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int* mfunc(){   // Function returns a pointer of type int
    int a = 234; 
    return &a;
}

int main(){

    // Dangling pointer --> Pointing to the memory address which is freed. (i.e Dangling pointers points to the Free memory)

    
    // Case 1 : Deallocation of memory block
    int* ptr = (int * ) malloc(7*sizeof(int));
    *ptr = 90;
    *(ptr+1) = 23;   // *(ptr+1) == ptr[1]
    ptr[2] = 34; 
    
    free(ptr); // ptr --> now a dangling pointer



    // Case 2 : Function returning local variable address
    int* ptr2;
    ptr2 = mfunc(); // ptr2 --> points to the memory location whose content is deleted as the scope of that variable is local. (i.e ptr2 --> Dangling Pointer)
  


    // Case 3 : If a variable goes out of scope
    int* ptr3;
    { // scope block starts here

        int scopeVar = 34;
        ptr3 = &scopeVar;

    } // scope block ends here --> i.e. Variable 'scopeVar' goes out of scope, thus the memory at which 'ptr3' is pointing is now free (i.e ptr3 --> Dangling Pointer)f 


    return 0;
}