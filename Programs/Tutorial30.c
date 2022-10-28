/* Depending upon the user input print star or reverse star pattern*/

#include<stdio.h>

void starPattern(){

   for(int i = 0;i<5;i++){
        for(int j = 0;j<=i;j++){
            printf("*");
        }
        printf("\n");
   }

}

void reverseStarPattern(){
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5-i;j++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){

    char intake = 'n';
  
do{
  
  int input;
  printf("Enter 1 to print star Pattern.\nEnter 0 to print reverse star Pattern.\n");
  scanf("%d", &input);

  if(input==1){
       starPattern();
  }
  else{
       reverseStarPattern();               
  }

  printf("Enter \'y\' to repeat!\n");
  scanf(" %c", &intake);
}
while(intake == 'y');
  return 0;

}