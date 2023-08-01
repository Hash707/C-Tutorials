// Author : hash707
// Date : 13 June 2023
// Purpose : Generate automatic receipt in C exercise (code with harry)

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* replaceWord(const char* str, const char* oldWord, const char* newWord){

    char* resultString;
    
    int i; // for the length of the array.
    int count = 0; // to count the number of oldwords in the string.
    int oldWordLength = strlen(oldWord);
    int newWordLength = strlen(newWord);

    for(i = 0; str[i] != '\0'; i++){
        // This means the String contains the oldWorld.
        if(strstr(&str[i] , oldWord) == &str[i]){  // &str[i] --> returns string from i(th) index till the null character of the string.
            count++; // increase the old word counter.

            i = i+oldWordLength - 1; // to skip the remaining letters of the old word.
        }
    }

    // Generating a new string dynamically to fit the new String length. i -> holds the lenght of the old string.
    resultString = (char *) malloc(i + count * (newWordLength - oldWordLength));

    i = 0;
    int j = 0;
    while(str[j] != '\0'){
        if(strstr(&str[j], oldWord) == &str[j]){
            strcpy(&resultString[i] , newWord);
            i += newWordLength;
            j += oldWordLength;
        }

        else{
           resultString[i] = str[j];
           i++;
           j++;
        }
    }
    resultString[i] = '\0';
    printf("The new string is %s" , resultString);
    return resultString;


}

int main(){

    
FILE* ptr = NULL;
FILE* ptr2 = NULL;

ptr2 = fopen("genBill.txt", "w");
ptr =  fopen("Tutorial_66_text.txt", "r");

char str[200];
fgets(str,200, ptr);

char* newStr;


newStr = replaceWord(str, "{{name}}", "MR. ARSH");

newStr = replaceWord(newStr, "{{outlet}}", "APNA SWEETS");

newStr = replaceWord(newStr, "{{item}}", "BHOJAN THALI FIX");

       //(destination, type, source);
fprintf(ptr2, "%s", newStr);
fclose(ptr);
fclose(ptr2);


return 0;
}