#include "stdio.h"

int main(){

    int age = 0;

    do{
        printf("Press 0 to Quit\n");
        printf("Please Enter Your Age\n");
        scanf("%d", &age);
        
        if (age>=18){
            printf("Woah You areay for Voting\n");
        }else{
            printf("You are not eligible for voting\n");
        }
        
    }while( age > 0);

    return 0;
}