// Author : Hash707
// Date : 7 September 2022
// Purpose : Code with Harry (Passing array to a function)

#include <stdio.h>


// The datatype size_t is unsigned integral type. It represents the size of any object in bytes and returned by sizeof operator. It is used for array indexing and counting. It can never be negative. The return type of strcspn, strlen functions is size_t.

void passingArray(int arr[], size_t size){
    printf("Passing the whole array\nIterating the elements:\n");
    for(size_t i = 0;i<size;i++){
        printf("%d \n", arr[i]);
    }
}

/* 
void passingArray(int arr[]){
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<size;i++)The datatype size_t is unsigned integral type. It represents the size of any object in bytes and returned by sizeof operator. It is used for array indexing and counting. It can never be negative. The return type of strcspn, strlen functions is size_t.
}
*/

// The above approach is wrong as the sizeof(arr) --> 4 bytes
// becoz, when passes as an arguments the arr == pointer having 4 bytes size.
// Therefore we have to pass the value of the size of the array within the parameters, otherwise there is no way to do so, when the array is passed in a function.

void passingBaseAddress(int *arr, size_t size){
      printf("Passing the base address\nIterating Elements of the array:\n");
      for(int i = 0;i<size;i++){
        printf("%d \n", *(arr+i));
      }
}

int main(){
     
     int marray[] = {23,45,12,76,4,8,90,10};
     size_t size = sizeof(marray)/sizeof(marray[0]);
     passingArray(marray, size);
     passingBaseAddress(marray, size);

    return 0;
}