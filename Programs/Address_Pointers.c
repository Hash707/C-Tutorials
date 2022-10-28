// Author : Hash707
// Date : 1 September 2022
// Purpose : Understanding Pointers
#include<stdio.h>

void main(){

 int m[] = {34,32,6,4};
 for(int i = 0;i<4;i++){
   printf("The address of %d value of array is : %p\n", i, &m[i]);
 }

 printf("Because BYTES taken by an int is : %lu\n", sizeof(int));

}