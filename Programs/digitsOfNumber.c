#include <stdio.h>

int main(){
    int t;
    //printf("Enter the number of test cases:\n");
    scanf("%d", &t);
    while(t--){
        int input;
      //  printf("Enter the input number:\n");
        scanf("%d", &input);
        int numF = 0;
        while(input>0){
            int lastDigit = input%10;
            input /= 10;
            if(lastDigit == 4){
                numF++;
            }
        }
        printf("%d\n", numF);
    }
}

