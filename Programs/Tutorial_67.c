// Author : hash707
// Date : 21 June 2023
// Purpose : File Modes in C Language (code with harry)

/*


        --- Working with Files in C ---

    1) stdio.h contains a function called fopen() for opening files in C.

    2) When working with files, we have to declare a pointer of type FILE.

    3) This declaration helps us to work with files through C program.

    4) The syntax for opening a file in standard I/O is::
            Ex:: ptr = fopen("FILENAME", "MODE");

    5) In order of read/write to a file, we can use fscanf/fprintf function.
            Ex:: fscanf(ptr, "%s", buff);
                 fprintf(prt, "Marks = %s", salary);

    6) fclose(ptr); // fptr is the file pointer associated with file to be closed.






        --- File Modes ---


    1) r -> Opens an existing text file for reading.

    2) w -> Opens a file for writing. If it doesn't exist, then a new file is created. Writing starts from the beginning of the file.

    3) a -> Opens a text file for writing in appending mode. If it does not exist, then a new file is created. The program will start appending content to the existing file content.

    4) r+ -> This mode will open a text file for both reading and writing.

    5) w+ -> Opens a text file for both reading and writing. It first truncates the file to zero length if it exists, otherwise creates a file if it does not exist.

    6) a+ -> Opens a text file for both reading and writing. It creats the file if it does not exist. The reading will start from the beginning but writing can only append to file.




        --- File I/O Functions in C ---


    There are various functions provided b C standard library to read and write a file, character by character, or in the form of a fixed length string.
    Some of them are::

        1) fputc
        2) fputs
        3) fgetc
        4) fgets



        --- 1. fputc() ---


    > Simplest function to write characters to a file is fputc
    > Syntax of fputc goes as follows::
        > int fputc(character, FILE pointer);
        > It returns the written character written on success.
        > On failure it returns EOF. (End Of File character).
        > The EOF is a constant defined in the header file stdio.h.



        --- 2. fputs() ---

    > fputs function is used to write a null terminated string to a file in c.
    > Syntax::
        > int fputs( const char *s, FILE *fp);



        --- 3. fgetc() ---

    > Simplest function to read characters from a file is fgetc().
    > Syntax of fgetc() goes as follow::
        > int fgetc(FILE * fp);
        > It returns the read character on success.
        > On failure it returns EOF.
        > The EOF is a constant defined in the header file stdio.h.



        --- 4. fgets() ---

    > fgets() function is used to read a null terminated string to a file in c.
    > Syntax::
        > int fgets( const char *s, int n,  FILE *fp);

            > n -> num of character we want to read, including the null character
            > s -> null terminated character array pointer.
            > fp -> FILE pointer.





*/

#include <stdio.h>

void forGetC()
{

    // we can use all modes (a, a+ ,r, r+, w, w+) according to our need.
    // Their description is given above and can be used accordingly.

    FILE *ptr = NULL;

    ptr = fopen("myfile67.txt", "r");
    char c = fgetc(ptr);
    printf("The character I read was : %c \n", c);

    c = fgetc(ptr); // The fgetc() will read next character each time we use it on same file.
    printf("The next character in file : %c\n", c);

    fclose(ptr);
}



void forGetS(){

    FILE* ptr = NULL;
    ptr = fopen("myfile67.txt", "r");

    char str[30];

    fgets(str, 10, ptr); // will read till 9 as "\0" null character is included.

    printf("The string is : %s", str);

    fclose(ptr);

}


void forPutCS(){


    FILE* ptr = NULL;
    ptr = fopen("myfile67_2.txt", "w");
    // Whenever we open a file in "write" mode --> firstly the content of the file is cleard completely.

    fputc('o', ptr);
    fputs("this is arsh", ptr);

    fclose(ptr);


}

int main()
{
    forPutCS();
    return 0;
}