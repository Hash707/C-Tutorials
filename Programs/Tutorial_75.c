// Author : hash707
// Date : 23 July 2023
// Purpose : Memory Leak in C (code with harry)




/* 

        --- Causes of Memory Leak in C ---
    
    > Memory leak is caused when we don't use dynamic memory properly.
    > When we keep on allocating memory in the heap without freeing, the overall memory usage
        keeps on increasing.
    > This situation is the cause of memory leak i.e. the programmer creates a memory block in 
        the memory and forgets to delete it.
    > To avoid these memory leaks situations, memory allocated on heap should always be freed
        when not needed. (using the free() function).



*/

#include<stdio.h>
#include<stdlib.h>

int main(){


    // Code to simulate the memory leak by allocating multiple dynamic memories with freeing.
    int i = 0;
    int a = 0;
    int * i2;
    while(i<455){
        printf("Welcome to code with harry");
        i2 = malloc(34444*sizeof(int));
        if(i%100 == 0){
            getchar();
        }
        i++;

        free(i2); // comment this line to simulate memory leak.
    }
    return 0;
}