// Author : Hash707
// Date : 19 SEP 2022
// Purpose : String in C (Code with Harry)

#include <stdio.h>

void printfstr(char* str){   // array[index] = *(baseAddres+index)
  
  int i = 0;
  while(str[i] != '\0'){
    printf("%c", str[i]);
    i++;
  }
  printf("\n");
}

char str[34];

void getInput(){
  gets(str);  // Taking string input from the user;
}

int main()
{
  
  char name[] = {'a', 'r', 's', 'h', '\0'};
  char name2[] = {'a', 's', 'h'}; // garbage value will be printed in this case (as no string termination is given)
  char name3[] = "Qureshi";
  printfstr(name);
  printfstr(name2);
  printfstr(name3);



   // NOTE NOTE NOTE NOTE NOTE NOTE 
   // Using scanf() --> we cant take whitespaces in a string!!! (Therefore use 'gets()' function).
 

  getInput();   // Taking string from user;
  printf("Using My Function:\n");
  printfstr(str); // Printing the string inputed;
  printf("Using PUTS Function:\n");
  puts(str); // Printing the string using puts function
  printf("Using printf function:\n");
  printf("%s\n", str); //Printing the String using printf function
  return 0;
}