#include<stdio.h>

void main(){

int age, marks;

printf("Enter your age:\n");
scanf("%d",&age);

printf("Enter your marks:\n");
scanf("%d", &marks);

switch (age)
{
case 3:
    printf("Your age is 3");
    switch (marks)
    {
    case 34:
        printf("Your marks are 45");
        break;
    
    default:
        break;
    }
    break;

case 5:
    printf("Your age is 5");
    break;

case 6:
    printf("Your are is 6");
    switch (marks)
    {
    case 89:
        printf("Your marks are 89");
        break;
    
    default:
        break;
    }
case 7: 
    printf("Your age is 7");
    break;

default:
    break;
}

}