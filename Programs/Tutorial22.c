// Author : Hash707
// Date : 31 August 2022
// Purpose : Code with Harry(Exercise : Unit Conversions)

#include <stdio.h>

void printGreetings()
{

    printf("\n\nWelcome to Unit Conversion Program!!!\n");
    printf("1 : To convert kms to miles.\n");
    printf("2 : To convert inches to foot.\n");
    printf("3 : To convert cms to inches.\n");
    printf("4 : To convert pound to kgs.\n");
    printf("5 : To convert inches to meters.\n");
    printf("q : To exit the program.\n");
}

void kmToMiles()
{
    printf("Enter the number of kms:\n");
    float intake;
    scanf("%f", &intake);
    printf("%f kms = %f miles", intake, (intake * 0.0621371));
}

void inchesToFoot()
{
    printf("Enter the number of inches:\n");
    float intake;
    scanf("%f", &intake);
    printf("%f inches = %f foot", intake, (intake * 0.083333));
}

void cmsToInches()
{
    printf("Enter the number of cms:\n");
    float intake;
    scanf("%f", &intake);
    printf("%f cms = %f inchs", intake, (intake * 0.393701));
}

void poundsToKgs()
{
    printf("Enter the number of pounds:\n");
    float intake;
    scanf("%f", &intake);
    printf("%f pounds = %f kgs", intake, (intake * 0.453592));
}

void inchesToMeters()
{
    printf("Enter the number of inches:\n");
    float intake;
    scanf("%f", &intake);
    printf("%f inches = %f meters", intake, (intake * 0.0254));
}

void main()
{

    int repeat = 1;

    char input;

    do
    {

        printGreetings();
        scanf(" %c", &input);
        switch (input)
        {
        case '1':
            kmToMiles();
            break;

        case '2':
            inchesToFoot();
            break;

        case '3':
            cmsToInches();
            break;

        case '4':
            poundsToKgs();
            break;

        case '5':
            inchesToMeters();
            break;

        case 'q':
            repeat = 0;
            break;

        default:
            printf("Not a valid input\n");
            break;
        }

    } while (repeat == 1);
}