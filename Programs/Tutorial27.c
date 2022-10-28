// Author : Hash707
// Date : 1 September 2022
// Purpose : Code with Harry (Pointer Arithmetic)


#include <stdio.h>
int main()
{
    int a = 34;
    int * ptra = &a;
    printf("The address of a is %p\n", ptra);
    int *ptrb = &a;
    printf("The address of a is %p\n", ptrb);
    int* ptrc = &a;
    printf("The address of a is %p\n", ptrc);

    char chars[15];
    chars[0] = '2';
    chars[1] = 'A';
    chars[2] = 't';
    chars[3] = 'u';
    char * baseAddress = &chars[0]; // int *baseAddress = chars (also same)
    printf("\n\nThe address of the first element of the array is :%p\n", baseAddress);
    printf("The address of the first element of the array is : %p\n", chars);
    printf("The variable at index two is :%c\n",*(baseAddress+1));
    printf("The address of second element in the array is %p:\n", &chars[1]);
    printf("The address of the second element in the array is : %p\n", (baseAddress+1));


    char archar[] = {'a','b','c'};
    int arint[] = {34,23,53};

    printf("\n\n The Memory allocation for arrays \n");
    printf("The address of the first element of the \'archar\' is : %p (Char byte size : 1byte)\n", archar);
    printf("The address of the second element of the \'archar\' is : %p\n\n", archar+1); // baseAddress{archar[0]} + 1 == archar[1]; 
    printf("The address of the first element of the \'arint\' is : %p(Int byte size : 4byte)\n", arint);
    printf("The address of the second element of the \'arint\' is : %p\n", arint+1);


    printf("\n\n The ways two get array elements: \n");
    int myarray[] = {23,543,67,654};
    printf("The first element of the array is : %d\n", *(&myarray[0]));
    printf("The first element of the array is : %d\n", myarray[0]);
    printf("The first element of the array is : %d\n", *(myarray));

    printf("\n\nThe third element of the array is : %d\n", *(&myarray[2]));
    printf("The third element of the array is : %d\n", myarray[2]);
    printf("The third element of the array is : %d\n", *(myarray+2));   // myarray + 2 == address of third element in the array
    
   
    return 0;
}