// Author : Hash707
// Date : 16 March 2023
// Purpose : Employee Manager Exercise (Code with Harry)

#include<stdio.h>
#include<stdlib.h>


void solution(){

    int empNum;
    printf("Enter the number of employees:\n");
    scanf("%d", &empNum);
    
    char* cptr;
    cptr = (char*) malloc(sizeof(char));  // Initiall Initializing the size as 1 Character.

    for(int i = 0;i<empNum;i++){
        int charNum;
        printf("Enter the number of character for %d employee id:\n", i+1);
        scanf("%d", &charNum);
        cptr = (char*) realloc(cptr,charNum*sizeof(char));   // Allowed to make only one character array therefore, using the realloc function
                                                               // to realloc the memory according to the number of character in the new employee id.
        printf("Enter the employee Id:\n");
        scanf("%s", cptr);

        printf("The Id for %d employee = %s\n", i+1, cptr);
       
    }

        free(cptr); 

}

int main(){

    // Dynamic Memory Allocation Problem
    // ABC Pvt Ltd. manages employee records of other companies. Employee Id can be of any length and it can contain any character.
    // Make ONLY character array dynamically. (USE REALLOC)    

    solution();
    return 0;
}