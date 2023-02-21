// Author : Hash707
// Date : 19 SEP 2022
// Purpose : String Function in C (Code with Harry)

#include <stdio.h>
#include <string.h> // All the string functions are included in 'String.h' header file!!

void printFriends(){
    char name[50];
    char fname[50];
    char msg[100];
    printf("Enter your name:\n");
    scanf("%s", name);
    printf("Enter your friends name:\n");
    scanf("%s", fname);
    
   strcat(fname," is the friend of ");
   strcpy(msg, fname);
   strcat(msg, name);
   puts(msg);

    
}

int main()
{
    char s1[] = "Arsh";
    char s2[] = "Qureshi";
    char s3[54];
    puts(strcat(s1,s2));
    puts(s1);
    printf("\nThe length of s1 is %lu\n", strlen(s1));
    strcpy(s3,strcat(s1,s2));
    puts(s3);
    printf("The strcmp value for s1 and s2 is %d", strcmp(s1,s2));  //  -ve if (s1 chars < s2 chars) || +ve if (s1 char > s2 chars)
                                                                    //   0 if (s1 chars == s2 chars) i.e. both the string are equal.
    printFriends();

    return 0;
}
