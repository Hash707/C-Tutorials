#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);
    int result = a+b;
    printf("The sum of the numbers %d and %d is %d\n", a,b,result);
    return 0;
}