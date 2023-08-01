// Author : Hash707
// Date : 23 FEB 2023
// Purpose : Unions in C (Code with Harry)

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
    
    // Unions are almost similar to the structures EXCEPT the memory allocated to a unions is equal to the largest member of the union

    // *IMP* VALUE OF ONLY ONE MEMBER IN UNION CAN BE ASSIGNED AT A TIME. AS MEMORY IS SHARED B/W ALL THE MEMBERS OF THE UNION. 

    union currentPlayer{
        char name[10]; // 12 Bytes
        int age; // 4 Bytes
        int id;  // 4 Bytes
    }cp;  // Total size = LARGEST MEMBER = 12 Bytes

    struct employee{
        char name[10]; // 12 Bytes
        int age; // 4 Bytes
        int id;  // 4 Bytes
    }emp; // Total size = sum of the members = 12+4+4 = 20 Bytes

    cp.age = 23;
    strcpy(cp.name, "mangu");
    cp.id = 63;  // 63 will be the value that is to be given to all the member of the unions as its setted last
   

    printf("The age of the cp is %d\n", cp.age);
    printf("The id of the cp is %d\n", cp.id);  
    printf("The name of the cp is %s\n", cp.name);  // will print character associated with ASCII value --> 63 (?)

    printf("The size of the union is %d\n", sizeof(cp));
    printf("The size of the structure is %d\n", sizeof(emp));

}