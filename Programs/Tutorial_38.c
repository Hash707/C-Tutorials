// Author : Hash707
// Date : 22 Feb 2023
// Purpose : Typedef in C (Code with Harry)

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){

    // Basic syntax of using typedef
    
    /* typedef <PREVIOUS_NAME> <ALIAS_NAME> */
    // Use can even use the previous name along with the alias name in the program
    
    // Note in case of Structures the whole definition of that structure in consider to be its previous name.

    typedef struct student{
            int age;
            int marks;
            char name[30];
    }std;             // Here the previous name is "std", which is written after the definition of the sturcture

    
    typedef float f;

    f salary = 34.34;  // alias name 
    float sal = 23.45; // previous name


    // Using typedef to create multiple pointers at once 

    typedef int* intprt;
    
    int k = 89;
    
    intprt a,b; // a and b --> pointer of integer type
    a = &k;
    b = &k;

    int * c, d;  // c --> int pointer but d --> integer
    c = &k;
    d = &k;
    
    printf("%d/n", a);
    printf("%d/n", b);
    printf("%d/n", c);
    printf("%d/n", d); // this gives warning as d --> integer

    // Without using typedef std --> varialbe of the type stuct student
    struct employee{
        int age;
        int salary;
    }emp; // here emp --> variable of type struct employee. And not is the alias because typedef is not 

    emp.age = 34;

    

    std s1;
    s1.age = 23;
    s1.marks = 44;
    strcpy(s1.name,"arsh");
         
    
    return 0;
}