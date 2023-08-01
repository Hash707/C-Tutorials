// Author : hash707
// Date : 06 June 2023
// Purpose : Other Preprocessor Directives and predefined macros in C (code with harry)

#include<stdio.h>

#define PI 3.14

// use of ifdef;
#ifdef PI
  int isPiSet = 1;
#endif

int main(){



    /*
    --- Recap of Tutorial 59 ---
    
    1) Preprocessor is a kind of automated editor that modifies a copy of the original source code.
    2) The #include directive causes the preprocessor to fetch the contents of some other file to be included in the present file.
    3) In C programming there are two common formats for #include.
    4) This file may in turn #include some other file(s) which may in turn do the same.
    5) Most commonly the #include files have a ".h" extension, indicating that they are header files.
    6) The #define directive is used to "define" preprocessor "variables".
    
    */ 


   /*
   
   --- Other C Preprocessors ---

   1) #define   --> Defines a macro.
   2) #include  --> To include some other file in the present file.
   3) #undefine --> Undefines a macro.
   4) #ifdef    --> Returns true if a preprocessor variable or macro is defined.
   5) #ifndef   --> Returns true if a preprocessor variable or macro is "NOT" defined.
   6) #if       --> If any compile time condition is true.
   7) #else     --> Alternate condition to if.
   8) #elif     --> Similar to else-if in.
   9) #pragma   --> To issue some special commands to the compiler.
   
   */


  /*
  
  --- Predefined Macros in C ---

  1) __DATE__ --> The current date as character literal in "MMM DD YYYY" format. (Jan 03 2021)
  2) __TIME__ --> This contains the current time as a character literal in "HH:MM:SS" format.
  3) __FILE__ --> The current filename as a string literal.
  4) __STDC__ --> Defined as one(1) when the compiler complies with the ANSI standard.
  5) __LINE__ --> The current line number as a decimal constant.
  
  */


    printf("File name is %s\n", __FILE__);
    printf("Todays  date is %s\n", __DATE__);
    printf("Time now is  %s\n", __TIME__);
    printf("Line number is %d\n", __LINE__);
    printf("ANSI : %d\n", __STDC__);
    printf("Is Pi set : %d", isPiSet);


    return 0;
}