// Author : Hash707 
// Date : 14 March 2023
// Purpose : Dynamic Memory Allocation in C (Code with Harry)

#include<stdio.h>
#include<conio.h>
#include<stdlib.h> // for using funcions of dynamic memory alocation

void fmalloc(){

 // USE OF MALLOC()  --> Defalut value at the allocated memory == Garbage value
    
    printf("\t\t\n This is the use of Malloc Function\t\t\n");

    int* ptr;
    ptr = (int*) malloc(3*sizeof(int)); // creates a continus memory block of 10 blocks of size int

    for(int i = 0; i<3;i++){
        printf("Enter a value\n");
        scanf("%d", ptr+i);  // Or scanf("d", &ptr[i]);
    }
    for(int i = 0;i<3;i++){
        printf("value at addr %d = %d\n", ptr+i, *(ptr+i) /*Or ptr[i]*/);
    }

    free(ptr); // Frees the dynamically allocated memory from the heap to be used again;

}

void fcalloc(){

    // USE OF CALLOC()   --> Default value at the allocated memory  == 0 (i.e. the memory has some value stored already == overhead)
    printf("\t\t This is the use of Calloc Function\t\t\n");
    printf("Enter the size of array you want to create dynamically\n");
    int size;
    scanf("%d", &size);
    int* cptr;

    cptr = (int*) calloc(size, sizeof(int));
    for(int i = 0;i<size;i++){
        printf("Enter the value to be stored dynamically:\n");
        scanf("%d", &cptr[i]); // cptr[i] = *(cptr+i);
    }

    for(int i = 0;i<size;i++){
        printf("value at %d = %d | ",i, cptr[i]);
    }

    free(cptr);

}

void frealloc(){
 // USE OF REALLOC()

  printf("\n\t\tThis is the use of the Realloc Function\t\t\n");

    int size;
    printf("Enter the size of the dynamically created array\n");
    scanf("%d", &size);

    int* rptr;
    rptr = (int*) calloc(size,sizeof(int));

    for(int i = 0;i<size;i++){
        printf("Enter the values of the array:\n");
        scanf("%d", &rptr[i]);
    }

    for(int i = 0;i<size;i++){
        printf("The value at %d = %d | ", i,rptr[i]);
    }
        
    printf("\n\t\tThis is the new valued array\t\t\n");
    printf("Enter the new size of the array to be dynamically created\n");

    scanf("%d", &size);

    rptr = (int*) realloc(rptr, size*sizeof(int));

    for(int i = 0;i<size;i++){
        printf("Enter the new elements:\n");
        scanf("%d", &rptr[i]);
    }
    for(int i = 0;i<size;i++){
        printf("The new value at %d = %d | ", i , rptr[i]);
    }

    free(rptr); // frees the dynamically allocated memory to be used again once our work is done with that space.
}

int main(){

            
frealloc();

           

    return 0;
}