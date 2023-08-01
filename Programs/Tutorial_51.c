// Author : Hash707
// Date : 18 March 2023
// Purpose : Rock, Paper, And Scissors Game in C (Code with Harry)

#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

void randomNum()
{

    // Random Numbers in C --> Using 'rand()' function of the 'stdlib' library.
    printf("The random number between 0 and 10 is %d\n", rand() % 10); // 10 --> exclusive (i.e 0-9)
}

void srandomNum()
{

    // Another way to generate random numbers is using srand which takes a seed to generate random number (seed has to be random to generate random number)
    srand(time(NULL)); // time(NULL) --> Returns time in seconds
}

void rpsGame()
{
    int pscore = 0, cscore = 0;
    printf("\n\t\t-------Welcome to the Rock Paper and Scissor Game!-------\t\t\n");
    char name[30];
    printf("Enter the name of the Player:\n");
    scanf("%s", name);
    for (int i = 0; i < 3; i++)
    {
        int pOption = 0;
        char optionName[10];
        printf("Choose your option:\n");
        printf("1)Rock\n2)Paper\n3)Scissor\n");
        scanf("%d", &pOption);
        switch (pOption)
        {
        case 1:
            strcpy(optionName, "Rock");
            break;

        case 2:
            strcpy(optionName, "Paper");
            break;

        case 3:
            strcpy(optionName, "Scissor");
            break;

        default:
            printf("Nothing\n");
        }

        printf("Player %s chooses %s\n", name, optionName);

        int cOption = (rand() % 3) + 1;

        switch (cOption)
        {
        case 1:
            strcpy(optionName, "Rock");
            break;

        case 2:
            strcpy(optionName, "Paper");
            break;

        case 3:
            strcpy(optionName, "Scissor");
            break;

        default:
            printf("Nothing\n");
        }

        printf("Computer Chooses %s\n", optionName);

        // pOption --> 1

        if (pOption == 1 && cOption == 1)
        {
            printf("It's a Tie\n");
        }

        if (pOption == 1 && cOption == 2)
        {
            printf("Computer wins\n");
            cscore++;
        }

        if (pOption == 1 && cOption == 3)
        {
            printf("Player %s wins\n", name);
            pscore++;
        }

        // pOption --> 2

        if (pOption == 2 && cOption == 1)
        {
            printf("Player %s wins\n", name);
            pscore++;
        }

        if (pOption == 2 && cOption == 2)
        {
            printf("It's a Tie\n");
        }
        if (pOption == 2 && cOption == 3)
        {
            printf("Computer wins\n");
            cscore++;
        }

         // pOption --> 2

        if (pOption == 3 && cOption == 1)
        {
             printf("Computer wins\n");
             cscore++;
        }

        if (pOption == 3 && cOption == 2)
        {
           printf("Player %s wins\n", name);
            pscore++;
        }
        if (pOption == 3 && cOption == 3)
        {
             printf("It's a Tie\n");
        }
        
        printf("\t\t-------Current Score-------\t\t\n");
        printf("\t\t-------Player %s\'s Score : %d   ||  Computer's Score : %d-------\n\n", name,pscore,cscore);
    }
    printf(pscore>cscore?("Player %s Won\n", name):(pscore==cscore)?("Its a Tie\n"):("Computer Won\n"));
}

int main()
{

    rpsGame();

    return 0;
}