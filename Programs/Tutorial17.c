#include<stdio.h>

void main(){
    //  labelArsh:
    //     printf("Hello, we are inside the label"); // if label name is before the goto statement we have an infinite loop (e.g. : "labelArsh")
     
    //  printf("Hello world");
     
    //  goto end;

    //  goto labelArsh;

    //  end:
    //     printf("This is the end");


        // Using goto to exit multiple loops at once

    int num;
    for(int i = 0;i<5;i++){
        printf(" i = %d \n", i);
        for(int j = 0;j<5;j++){
            printf("Enter a number or Enter 0 to exit the loops\n");
            scanf("%d", &num);
            if(num == 0){
                //break;  only exits the inner loop not the upper loop;
                goto loopend;
            }
        }
    }

    loopend:
        printf("end"); // without this --> label at the end of the compound statement error is encountered!!!
                       // can't use label at the end of a function;

}