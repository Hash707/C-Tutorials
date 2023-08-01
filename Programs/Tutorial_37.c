// Author : Hash707
// Date : 21 FEB 2023
// Purpose : Sturctures in C (Code with Harry)

#include<stdio.h>
#include<conio.h>

struct student{
    int id;
    int marks;
    char fav_char;
};

void main(){

    struct student s1,s3;
    s1.id = 23;
    s1.marks = 99;
    s1.fav_char = 'A';

    s3.id = 26;
    s3.marks = 44;
    s3.fav_char = 'P';

    struct student s2 = {25,56}; // we can also leave some of the fields empty.

    printf("Marks of the s2 student is %d\n", s2.marks);
    printf("The fav char of the s2 student is %c\n", s2.fav_char); // Fav-char is blank, as we dont provide it any value

}