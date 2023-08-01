// Author : Hash707
// Date : 23 June 2023
// Purpose : Command Line Arguments in C (code with harry)



/*

        --- What are Command Line Arguments ---

    
    > Command Line Arguments is an important concept in C programming.
    > Sometimes we need to pass arguments from the command line to the program a set of inputs.
    > Command line arguments are used to supply parameters to the program when it is invoked.
    > It is mostly used when you need to control your program from the console.
    > These arguments are passed to the main() method.



        --- Command Line Example ---

    > FFmpeg is a free and open-source project consisting of a vast software suite of libraries and programs
        for handling video, audio, and other multimedia files and streams.

    > FFmpeg.exe is a command line utility written in c language.
    
    > Other examples include git, brew, apt-get, etc.










*/


#include<stdio.h>

int main(int argc, char const *argv[]){


    /*
    
        Here, 
        argc -> number of arguments.
        argv -> array of character pointer.

        The first element of the array is the full name of the program.
        Therefore, by default the value of "argc" is 1. (Storing the program name at index 0).
        Therefore, the total length of the "argc" = arguments passed + 1.
        
        To iterate only through the passed arguments, we should start from the index 1 of the argv array,
        as the zeroth(0th) index is reserved for the name of the program.


        To pass arguments::

        > .\<file_name.exe> arg1 arg2 arg3 arg4

        we write the name of the executable file, followed by the arguments.
    
    
    
    */

    printf("The value of argc is %d\n", argc);
    for(int i = 0;i<argc;i++){
        printf("This argument at index number %d has value of %s \n", i, argv[i]);
    }
    return 0;
}