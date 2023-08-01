// Author : hash707
// Date : 06 June 2023
// Purpose : Working with Files in C (code with harry)

#include<stdio.h>

int main(){

    /*
    
        --- File opening introduction ---

    1) When working with files, we have to declare a pointer of type FILE.
    2) This declaration helps us to work with files through C program.

    FILE* ptr = null;
    

   
        --- Opening a File : Creatring or Editing a file ---
   
    1) stdio.h contains a function called fopen() for opening files in C.
    2) The syntax for opening a file in standard I/O is::
        ptr = fopen("fileopen","mode");

        Eg::
            fopen("E:\\Code\\harry.txt","w"); --> write mode
            fopen("E:\\Programming\\bhai.bin","rb"); --> read binary mode
   




        --- Closing in file ---

    1) Any file which is openen in a C program needs to be closed.
    2) Closing a file is accomplished by the library function fclose().
    3) fclose(fptr); --> fptr is the file pointer associated with file to be closed.

  


 

        --- Reading a file ---
    
    1) In order to read a file, we can use "fscanf" function.
    2) This function is file version of "scanf" function.
    3) "fscanf" expects a file pinter in addition to the oter arguements which "scanf" expects.
    4) We well have to open the file in "read mode" in order to use this function.

    Eg:: 
        fscanf(ptr, "%s", string_name_where_scanned_input_is_to_be_stored);
 
 


        --- Writing to a file ---
    
    1) In order to write to a file, we can use "fprintf" function.
    2) This function is file version of "printf" function.
    3) "fprintf" expects a file pointer in addition to the other arguments which "printf" expects.
    4) We will have to open the file in "write mode" in order to use this function.

    */




   // ****** Writing to a file ******

   FILE* ptr = NULL;
   ptr = fopen("demo.txt", "w"); // w --> write mode
   fprintf(ptr, "%s", "-->Written using \"Write mode\", this text will replace any text in demo.txt file.");


// ***** Appending to a file ******
    ptr = fopen("demo.txt", "a"); // a --> append mode
    fprintf(ptr,"%s","\n-->This is written using \"Append mode\" after the \"Write mode\".");

// ***** Reading a file ******

    FILE* ptrR = NULL;
   char fileText[50];
   ptrR = fopen("demo.txt", "r");
   fscanf(ptrR,"%s", fileText); // reads till the first whitespace(space);
   printf("The content of the file is :\n%s", fileText);


    return 0;
}