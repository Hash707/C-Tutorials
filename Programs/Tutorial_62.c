// Author : hash707
// Date : 06 June 2023
// Purpose : File I/O in C language (code with harry)

#include<stdio.h>

int main(){



    /*
    
    --- Why do we need a file? ---



    1) File sare used to store data and information.

    2) Files are used to read and access data anytime from the hard disk.

    3) Fiesl amke it easy for a programmer to access and store content without losing it on 
       program termination.

    4) When a C program is terminated, the data stored in ram is lost.

    5) Storing in a file will preserve our data even after the program terminates.

    6) RAM is not able to handle quite large amount of data due to its small size relative 
       to the hard disk.

    7) It is easy to transfer data as files.
    

    */


   /*
   
   --- Volatile v/s Non-Volatile memory ---


    1) Volatile Memory::
        a) Volative memory is computer storage that only maintains its data while the 
           device is powered.

        b) The RAM will hold data, programs, and information as long as it has a constant
           power supply but immediately the power is interrupted all that content is cleared.
        
        c) The volatile memory will only hold data temporarily.



    2) Non-Volatile Memory::
        a) Non-Volatile memory is computer memory that can retain the stored information
           even when not powered. 

        b) This type of memory is also referred to as permanent memory since data within it can
           be retrieved even when there is no constant power supply.

        c) It is used for the long-term storage of data.

   */

  /*
  
  
  --- Types of Files ---

    1) Text files --> stores the data in plain-text format. (can be open with notepad, etc).
    2) Binary files --> Stores the data in binary format.

  
  */


 /*
 
 --- File Operations in C ---

    In C we can perform these high level operations on files::
        1) Creating a file.
        2) Opening a file.
        3) Closing a file.
        4) Reading from and writing to a file.
 
 
 */


    return 0;
}