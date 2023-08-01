// Author : Hash707
// Date : 20 March 2023
// Purpose : '#include' and '#define' Preprocessors in C (Code with Harry)

#include<stdio.h>

// using #include for file in current directory
#include "localfile.c"

// using the #define 
#define PI 3.142

// making a macro
#define SQUARE(r) r*r


int main(){

    /*
    
    1) The #include directive causes the preprocessor to fetch the contents of some other file
       to be included in the present file.

    2) This file may in turn #ncluce some other file(s) which may in turn do the same.

    3) Most commonly the #included files have a ".h" extension, indicating that they are header
       files.
    
    
    
    */
   float var = PI;
   printf("%.2f", var);

   int r = 7;

   float area = PI * SQUARE(r);
   printf("The area of the circle is %f", area);
    
    return 0;
}