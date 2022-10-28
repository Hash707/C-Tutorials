// Author : Hash707
// Date : 31 August 2022
// Purpose : Code with Harry(Fabonacci series using Recursion)

#include<stdio.h>


int fabo(int num){

   if(num == 1)
    return 1;

   if(num == 0)
    return 0;

   return fabo(num-1)+fabo(num-2);

}

int faboIteration(int term){

   int first = 0;
   int second = 1;
   int nth;
   for(int i = 0;i<term-2;i++){
      nth = first+second;
      first = second;
      second = nth;
   }

   return nth;

}

int main(){
   
   // Program to give the nth term of the fabo series

   /* printf("Enter the term of fabo to be found out:\n");
    int input;
    scanf("%d", &input);
    printf("%dth fab number is %d\n",input, fabo(input));
   */

   
   // Program to print nth terms of the fabo series startring from 1;
    printf("Enter the number of terms of the fabo series:\n");
    int terms;
    scanf("%d", &terms);
    for(int i = 0 ; i<terms;i++){
         fabo(i);
         printf("%d term of fabo = %d\n", (i+1), fabo(i));
    }

    // Fabo nth term using the Iteration

    printf("Enter the term of the fabo series:\n");
    int termIteration;
    scanf("%d", &termIteration);
    printf("The %d term of the fabo = %d\n", termIteration, faboIteration(termIteration));

    return 0;
}

