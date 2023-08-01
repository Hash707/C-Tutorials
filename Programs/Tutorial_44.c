// Author : Hash707
// Date : 24 Feb 2023
// Purpose : Travel Agency Manager Exercise (Code with Harry)

#include <stdio.h>
#include <conio.h>


struct drivers
{
    char name[30];
    char dl[10];
    char route[50];
    int kms;
};

int main()
{   
    int n;
    printf("Enter the total no. of the drivers.\n");
    scanf("%d", &n);
    struct drivers arrDrivers[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the details for the %d driver.\n", i + 1);
        printf("Name : ");
        scanf("%s", &arrDrivers[i].name);
        printf("DL No. : ");
        scanf("%s", &arrDrivers[i].dl);
        printf("Route : ");
        scanf("%s", &arrDrivers[i].route);
        printf("Kms Travelled : ");
        scanf("%d", &arrDrivers[i].kms);
    }

    printf("The details the stored successfully.\n");

     printf("Enter 'y' to display details.\n");

    char input;                                   
    scanf(" %c", &input);  // Space before (%c) i.e. " %c" is to prevent it from takin (enter key) as the input
    if ('y' == input || 'Y' == input)
    {
        printf("\n\n\t----------------DETAILS-------------------\n\n");
        for (int i = 0; i < n; i++)
        {
            printf("\tDriver %d:\n", i+1);
            printf("\t\tName    =   %s\n", arrDrivers[i].name);
            printf("\t\tDL No.  =   %s\n", arrDrivers[i].dl);
            printf("\t\tRoute   =   %s\n", arrDrivers[i].route);
            printf("\t\tKms     =   %d\n", arrDrivers[i].kms);
        }
    }

    
}