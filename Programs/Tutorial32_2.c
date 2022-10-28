// Author : Hash707
// Date : 18 September 2022
// Purpose : Understanding Array(Chaning the value of the formal parameter array ---> changer value of acutal parameter array)
// Explanation : Because the array works on pointer (i.e Addresses ) there the value the changed for both actual and formal

#include <stdio.h>


void changeValues(int array[], unsigned int n){   // Because size_t == unsigned int
 
   printf("\nIteraing Array in the function and changing its value in the calling function:\n");
   for(int i = 0;i<n;i++){
     printf("%d ", array[i]);
   }
   printf("\n");

   // Changing value

   for(int i = 0;i<n;i++){
    array[i] = array[i] + 1;
   }

}

int main()
{
    int marr[] = {23,5,3,65,21,89};
    size_t size  = sizeof(marr)/sizeof(marr[0]);
    printf("Iterating array:\n");
    for(int i = 0;i<size;i++){
        printf("%d ", marr[i]);
    }
    
    changeValues(marr, size);
    printf("The value is changed in the main function : \n");
    for(int i = 0;i<size;i++){
        printf("%d ", marr[i]);
    }
    printf("\n");

    return 0;
}