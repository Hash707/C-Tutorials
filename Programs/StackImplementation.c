// Author : Hash707
// Date : 19 September 2022
// Purpose : Implementation of Stacks in C usng Arrays.

#include <stdio.h>
#define MAX 50

// Declaring common functions of a stack {Pop, Push, Peep, isEmpty, length}
char pop();
void push();
char peep();
int isEmpty();
int size();
int isFull();

// Declaring global variables
char stack[MAX]; // Creating an array of size 50
int currentPointer = -1;
int length = 0 ;

int main()
{
    char input;

    do
    {   
        int opInput;
        printf("Enter operation to perform:\n");
        printf("1. pop, 2. push, 3. peep, 4. isEmpty, 5. size, 6. isFull\n");
        scanf("%d", &opInput);
        switch (opInput)
        {
        case 1:
            pop();
            break;

        case 2:
            push();
            break;

        case 3:
            peep();
            break;

        case 4:
            isEmpty();
            break;

        case 5:
            size();
            break;

        case 6:
            isFull();
            break;

        default:
            printf("Not a valid operation.\n");
            break;
        }

        printf("Enter 'y' to perform operations on the stack\n");
        scanf("%c ", &input);

    } while (input == 'y');

    return 0;
}

void push()
{

    if (length>=50)
    {
        currentPointer++;
        printf("Enter the char value to be stored in stack:\n");
        scanf("%c", &stack[currentPointer]);
        length++;
    }
    else
    {
        printf("StackOver Flow Condition!!!\n");
    }
}

char pop()
{

    if (!isEmpty)
    {
        printf("%c", stack[currentPointer]);
        currentPointer--;
        length--;
    }
    else
    {
        printf("StackUnder Flow Condition!!!\n");
    }
}

int size()
{
    printf("The size fo the stack is : %d\n", length);
    return length;
}

int isEmpty()
{
    if (length <= 0)
    {   
        printf("True\n");
        return 1;
    }
    printf("False\n");
    return 0;
}

int isFull()
{
    if (length >= 50)
    {
        printf("True\n");
        return 1;
    }
    printf("False\n");
    return 0;
}

char peep()
{
    printf("%c", stack[currentPointer]);
}