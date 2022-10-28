#include<stdio.h>
int main(){

   int t;
   //printf("Enter the number of test cases:\n");
   scanf("%d", &t);
   while(t--){
   int count = 0;
   //printf("Enter the number of students:\n");
   int nStudents;
   scanf("%d", &nStudents);
   int mtime[nStudents];
   //printf("Enter the mtime of the students:\n");
   for(int i = 0;i<nStudents;i++){
    scanf("%d", &mtime[i]);
   }
   int rtime[nStudents];
   //printf("Enter the rtime of the students:\n");
   for(int i = 0;i<nStudents;i++){
    scanf("%d", &rtime[i]);
   }

   for(int i = 0;i<nStudents;i++){
    if(i == 0){
        if(rtime[i] <= mtime[i]){
            count++;
        }
    }
    else{
        if(rtime[i] <= (mtime[i]-mtime[i-1])){
            count++;
        }
    }
   }

   printf("%d", count);

  

}

}