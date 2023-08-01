// Author : hash707
// Date : 06 June 2023
// Purpose : Check Palindrome in C (code with harry).

#include<stdio.h>

int checkPalindrome(int num){

    int rev = 0;
    int or = num;
    while(num>0){
        int temp = num%10;
        rev *= 10;
        rev += temp;
        num /= 10;
    }

    if(rev == or){
        return 1;
    }

    return 0;

}

int main(){
    
    int num = 0;

    printf("Enter the number : \n");
    scanf("%d", &num);

    if(checkPalindrome(num)){
        printf("The number is a palindrome");
    }
    else{
        printf("The number is not a palindrome");
    }

    return 0;
}