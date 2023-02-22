// Author : Hash707
// Date : 21 FEB 2023
// Purpose : Array reversal

#include<stdio.h>
#include<conio.h>


void revarr(int arr[]){
   int arrrev[7];
   for(int i = 0;i<=6;i++){
    arrrev[i] = arr[6-i];
   }
   for(int i = 0;i<=6;i++){
    printf("%d\n",arrrev[i]);
   }
}

void revarr2(int arr[]){
    for(int i = 0;i<=6/2;i++){
       
        int temp = 0;
        temp = arr[i];
        arr[i] = arr[6-i];
        arr[6-i] = temp;

      
    }
    for(int i = 0;i<=6;i++){
        printf("%d\n",arr[i]);
    }
}

void main(){
    int arr[] = {1,2,3,4,5,6,7};
    for(int i = 0;i <= 6;i++){
        printf("%d\n", arr[i]);
    }
    printf("The reversed array is here\n");
    revarr2(arr);
}
