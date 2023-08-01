// Author : Hash707
// Date : 23 FEB 2023
// Purpose : HTML Parser in C (Code with Harry)

#include <stdio.h>
#include <conio.h>
#include <string.h>

void parse(char string[]){

    int in = 0;
    int index = 0;
    for(int i = 0;i<strlen(string); i++){
        if(string[i] == '<'){
            in = 1;
            continue;
        }
        else if(string[i] == '>'){
            in = 0;
            continue;
        }
        if(in == 0){
            string[index] = string[i];
            printf("index = %d and character = %c\n", index,string[i]);
            index++;
            
        }
    }
    string[index] = '\0';

    // This will remove any whitespace before the start of the statement.
    while(string[0] == ' '){
        for(int i = 0;i<index;i++){
            string[i] = string[i+1];
        }
    }   

    // After the above loop the lenght of the string is changed as the null character is shifted forward by remvoing the spaces in the starting
    // But the 'index' remains same as it is independent of the size of the string because its a differet variable.

    printf("index = %d", index);
    printf("strlen = %d", strlen(string));


    // This will remove any whitespaces after the end of the statement.
    while(string[strlen(string)-1] == ' '){
        string[strlen(string) - 1] = '\0';
        printf("\nNow Strlen = %d\n", strlen(string)); // the size of the string is shrinking as the null character is taking place of the empty spaces at the end of the string
    }

   
}

int main(){

    char string[] = "<h1>    This is the heading     </h1>";
    parse(string);
    printf("\n*%s*\n", string);

}

// Challenge

// Input  : <h1> This is the heading </h1>
// Output : This is the heading

